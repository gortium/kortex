# GripperCyclic \(Python\)

This page describes the Python GripperCyclic API.

## Class reference

This section describes the data classes used in this API, as well as their member values and member functions.

 **Messages** 

|Class|Description|
|-----|-----------|
|[Command](../messages/GripperCyclic/Command.md#)|Command sent to a gripper|
|[CustomData](../messages/GripperCyclic/CustomData.md#)|Custom data from gripper and gripper motors|
|[CustomDataUnit](../messages/GripperCyclic/CustomDataUnit.md#)|Custom data|
|[Feedback](../messages/GripperCyclic/Feedback.md#)|Status feedback from a gripper|
|[MessageId](../messages/GripperCyclic/MessageId.md#)|Message identifier for command or feedback|
|[MotorCommand](../messages/GripperCyclic/MotorCommand.md#)|Command to a single gripper motor|
|[MotorFeedback](../messages/GripperCyclic/MotorFeedback.md#)|Status feedback from a single gripper motor|

 **Enumerators** 

|Enumerator|Description|
|----------|-----------|
|[ServiceVersion](../enums/GripperCyclic/ServiceVersion.md#)| |

Service to exchange cyclic data with gripper

 **Services** 

|Function name|Return type|Input type|Description|
|-------------|-----------|----------|-----------|
|Refresh|[Feedback](../messages/GripperCyclic/Feedback.md#)|[Command](../messages/GripperCyclic/Command.md#)|Sends a command to the gripper and receives feedback about the actual status of the gripper|
|RefreshCommand|[Empty](../messages/Common/Empty.md#)|[Command](../messages/GripperCyclic/Command.md#)|Sends a command to the gripper without receiving feedback|
|RefreshFeedback|[Feedback](../messages/GripperCyclic/Feedback.md#)|[MessageId](../messages/GripperCyclic/MessageId.md#)|Obtains feedback from the gripper on its status|
|RefreshCustomData|[CustomData](../messages/GripperCyclic/CustomData.md#)|[MessageId](../messages/GripperCyclic/MessageId.md#)|Obtains custom data from the gripper|

