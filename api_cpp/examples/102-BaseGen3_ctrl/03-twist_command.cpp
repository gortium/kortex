/*
* KINOVA (R) KORTEX (TM)
*
* Copyright (c) 2018 Kinova inc. All rights reserved.
*
* This software may be modified and distributed
* under the terms of the BSD 3-Clause license.
*
* Refer to the LICENSE file for details.
*
*/

#include <BaseClientRpc.h>
#include <SessionManager.h>

#include <RouterClient.h>
#include <TransportClientTcp.h>

namespace k_api = Kinova::Api;

#define IP_ADDRESS "192.168.1.10"
#define PORT 10000

void example_move_to_home_position(k_api::Base::BaseClient* base)
{
    // Make sure the arm is in Single Level Servoing before executing an Action
    auto servoingMode = k_api::Base::ServoingModeInformation();
    servoingMode.set_servoing_mode(k_api::Base::ServoingMode::SINGLE_LEVEL_SERVOING);
    base->SetServoingMode(servoingMode);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    
    // Move arm to ready position
    std::cout << "Moving the arm to a safe position" << std::endl;
    auto action_type = k_api::Base::RequestedActionType();
    action_type.set_action_type(k_api::Base::REACH_JOINT_ANGLES);
    auto action_list = base->ReadAllActions(action_type);
    auto action_handle = k_api::Base::ActionHandle();
    action_handle.set_identifier(0);
    for (auto action : action_list.action_list()) 
    {
        if (action.name() == "Home") 
        {
            action_handle = action.handle();
        }
    }

    if (action_handle.identifier() == 0) 
    {
        std::cout << "Can't reach safe position, exiting" << std::endl;
    } 
    else 
    {
        base->ExecuteActionFromReference(action_handle);
        std::this_thread::sleep_for(std::chrono::milliseconds(20000)); // Leave time to action to finish
    }
}

void example_twist_command(k_api::Base::BaseClient* base)
{
    auto command = k_api::Base::TwistCommand();
    command.set_reference_frame(k_api::Common::CARTESIAN_REFERENCE_FRAME_TOOL);
    command.set_duration(0);  // Unlimited time to execute

    std::cout << "Sending twist command for 5 seconds..." << std::endl;

    auto twist = command.mutable_twist();
    twist->set_linear_x(0.0f);
    twist->set_linear_y(0.03f);
    twist->set_linear_z(0.00f);
    twist->set_angular_x(0.0f);
    twist->set_angular_y(0.0f);
    twist->set_angular_z(5.0f);
    base->SendTwistCommand(command);

    // Let time for twist to be executed
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));

    std::cout << "Stopping robot ..." << std::endl;

    // Make movement stop
    twist->set_linear_x(0.0f);
    twist->set_linear_y(0.0f);
    twist->set_linear_z(0.0f);
    twist->set_angular_x(0.0f);
    twist->set_angular_y(0.0f);
    twist->set_angular_z(0.0f);
    base->SendTwistCommand(command);
}

int main(int argc, char **argv)
{
    // Create API objects
    auto error_callback = [](k_api::KError err){ cout << "_________ callback error _________" << err.toString(); };
    auto transport = new k_api::TransportClientTcp();
    auto router = new k_api::RouterClient(transport, error_callback);
    transport->connect(IP_ADDRESS, PORT);

    // Set session data connection information
    auto create_session_info = k_api::Session::CreateSessionInfo();
    create_session_info.set_username("admin");
    create_session_info.set_password("admin");
    create_session_info.set_session_inactivity_timeout(60000);   // (milliseconds)
    create_session_info.set_connection_inactivity_timeout(2000); // (milliseconds)

    // Session manager service wrapper
    std::cout << "Creating session for communication" << std::endl;
    auto session_manager = new k_api::SessionManager(router);
    session_manager->CreateSession(create_session_info);
    std::cout << "Session created" << std::endl;

    // Create services
    auto base = new k_api::Base::BaseClient(router);
    
    // Example core
    example_move_to_home_position(base);
    example_twist_command(base);

    // Close API session
    session_manager->CloseSession();

    // Deactivate the router and cleanly disconnect from the transport object
    router->SetActivationStatus(false);
    transport->disconnect();

    // Destroy the API
    delete base;
    delete session_manager;
    delete router;
    delete transport;
}