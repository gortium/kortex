# Base \(C++\)

This page describes the C++ Base API.

## Class reference

This section describes the data classes used in this API, as well as their member values and member functions.

 **Messages** 

|Class|Description|
|-----|-----------|
|[Action](../messages/Base/Action.md#)|Defines an action. An action is some task performed on the robot.|
|[ActionExecutionState](../messages/Base/ActionExecutionState.md#)|Indicates the execution state of an action \(not implemented yet\)|
|[ActionHandle](../messages/Base/ActionHandle.md#)|Reference to a specific action|
|[ActionList](../messages/Base/ActionList.md#)|Array of actions|
|[ActionNotification](../messages/Base/ActionNotification.md#)|Notification about a single action event|
|[ActionNotificationList](../messages/Base/ActionNotificationList.md#)|Array of action notifications|
|[ActivateMapHandle](../messages/Base/ActivateMapHandle.md#)|Reference to a specific new active map for the specified mapping and map group|
|[ActuatorInformation](../messages/Base/ActuatorInformation.md#)|A count of the number of actuators in the robot|
|[Admittance](../messages/Base/Admittance.md#)|An admittance mode|
|[AdvancedSequenceHandle](../messages/Base/AdvancedSequenceHandle.md#)|Reference to a sequence along with execution options|
|[AppendActionInformation](../messages/Base/AppendActionInformation.md#)|Representation of the result of appending \(adding at the end\) an action to an existing sequence \(not implemented yet\)|
|[ArmStateInformation](../messages/Base/ArmStateInformation.md#)|Information about the arm state|
|[ArmStateNotification](../messages/Base/ArmStateNotification.md#)|Notification about a single arm state event|
|[BridgeConfig](../messages/Base/BridgeConfig.md#)|Bridge configuration information. It is used to either create a bridge or to retrieve information about an existing bridge|
|[BridgeIdentifier](../messages/Base/BridgeIdentifier.md#)|Bridge identifier|
|[BridgeList](../messages/Base/BridgeList.md#)|An array of configuration information for different bridges.|
|[BridgePortConfig](../messages/Base/BridgePortConfig.md#)|Port configuration information for a TCP port bridge|
|[BridgeResult](../messages/Base/BridgeResult.md#)|The result of an operation on a specific bridge|
|[CapSenseConfig](../messages/Base/CapSenseConfig.md#)|Capacitive sensor configuration information|
|[CartesianLimitation](../messages/Base/CartesianLimitation.md#)|Translation and orientation limits for a specified limit type for Cartesian configuration|
|[CartesianLimitationList](../messages/Base/CartesianLimitationList.md#)|Array of Cartesian limitations|
|[CartesianSpeed](../messages/Base/CartesianSpeed.md#)|A Cartesian tool speed \(translation speed and angular speed\)|
|[CartesianTrajectoryConstraint](../messages/Base/CartesianTrajectoryConstraint.md#)|Cartesian trajectory constraint that can be applied when controlling in Cartesian trajectory mode|
|[ChangeJointSpeeds](../messages/Base/ChangeJointSpeeds.md#)|Action to change the maximum angular velocity per joint by a specific increment|
|[ChangeTwist](../messages/Base/ChangeTwist.md#)|Action to change the maximum Cartesian velocity by a specific increment|
|[ChangeWrench](../messages/Base/ChangeWrench.md#)|Action to change the maximum Cartesian force by a specific increment|
|[CommunicationInterfaceConfiguration](../messages/Base/CommunicationInterfaceConfiguration.md#)|Configuration information for enabling or disabling a specific communication interface \(e.g. Wi-Fi, Wired Ethernet\)|
|[ConfigurationChangeNotification](../messages/Base/ConfigurationChangeNotification.md#)|Representation of a configuration change event|
|[ConfigurationChangeNotificationList](../messages/Base/ConfigurationChangeNotificationList.md#)|Array of configuration change notifications|
|[ConstrainedJointAngle](../messages/Base/ConstrainedJointAngle.md#)|A single joint angle value with specifed constraint|
|[ConstrainedJointAngles](../messages/Base/ConstrainedJointAngles.md#)|An array of joint angles values with specified constraint|
|[ConstrainedOrientation](../messages/Base/ConstrainedOrientation.md#)|Cartesian tool orientation with specified constraint|
|[ConstrainedPose](../messages/Base/ConstrainedPose.md#)|Cartesian tool pose with specified constraint|
|[ConstrainedPosition](../messages/Base/ConstrainedPosition.md#)|Cartesian tool position with specified constraint|
|[ControlModeInformation](../messages/Base/ControlModeInformation.md#)|Control mode information|
|[ControlModeNotification](../messages/Base/ControlModeNotification.md#)|Notification about a single control mode event|
|[ControlModeNotificationList](../messages/Base/ControlModeNotificationList.md#)|Array of control mode notifications|
|[ControllerElementHandle](../messages/Base/ControllerElementHandle.md#)|Reference ro a specific button \(or axis\) of a controller device|
|[ControllerElementState](../messages/Base/ControllerElementState.md#)|Indicates if a specific button \(or axis\) was pressed \(or moved\)|
|[ControllerEvent](../messages/Base/ControllerEvent.md#)|A controller event|
|[ControllerHandle](../messages/Base/ControllerHandle.md#)|Reference to a specific controller device|
|[ControllerList](../messages/Base/ControllerList.md#)|Array of references to different controllers|
|[ControllerNotification](../messages/Base/ControllerNotification.md#)|Notification about a single controller event|
|[ControllerNotificationList](../messages/Base/ControllerNotificationList.md#)|Array of controller notifications|
|[ControllerState](../messages/Base/ControllerState.md#)|Indicates if a specific controller is connected \(or disconnected\)|
|[Delay](../messages/Base/Delay.md#)|Action to apply a delay|
|[EmergencyStop](../messages/Base/EmergencyStop.md#)|Action to force an emergency of the robot|
|[FactoryNotification](../messages/Base/FactoryNotification.md#)|Notification about a single factory event|
|[Faults](../messages/Base/Faults.md#)|Action to clear faults|
|[Finger](../messages/Base/Finger.md#)|Movement of a specified gripper finger|
|[FullIPv4Configuration](../messages/Base/FullIPv4Configuration.md#)|IPv4 configuration for a specific network|
|[FullUserProfile](../messages/Base/FullUserProfile.md#)|Information about a user, together with a password. Full set of information needed to create a user profile.|
|[GpioEvent](../messages/Base/GpioEvent.md#)|A GPIO event \(not implemented yet\)|
|[Gripper](../messages/Base/Gripper.md#)|Gripper movement composed of a series of fingers movement|
|[GripperCommand](../messages/Base/GripperCommand.md#)|A command to control the gripper movement|
|[GripperRequest](../messages/Base/GripperRequest.md#)|Request to apply a specific gripper mode|
|[IPv4Configuration](../messages/Base/IPv4Configuration.md#)|IPv4 configuration information|
|[IPv4Information](../messages/Base/IPv4Information.md#)|Information about an IPv4 endpoint|
|[JointAngle](../messages/Base/JointAngle.md#)|Angle value of a specific joint|
|[JointAngles](../messages/Base/JointAngles.md#)|An array of joint angles|
|[JointLimitation](../messages/Base/JointLimitation.md#)|Limitation for a specified robot joint|
|[JointSpeed](../messages/Base/JointSpeed.md#)|Speed of a specific joint|
|[JointSpeeds](../messages/Base/JointSpeeds.md#)|An array of joints speeds|
|[JointTorque](../messages/Base/JointTorque.md#)|joint torque for a specified joint|
|[JointTorques](../messages/Base/JointTorques.md#)|An array of joint torques|
|[JointTrajectoryConstraint](../messages/Base/JointTrajectoryConstraint.md#)|Joint trajectory constraint that can be applied when controlling a joint in trajectory mode|
|[JointsLimitationsList](../messages/Base/JointsLimitationsList.md#)|Array of joint limitations|
|[Map](../messages/Base/Map.md#)|A map as an array of map elements|
|[MapElement](../messages/Base/MapElement.md#)|Associates an event to an action|
|[MapEvent](../messages/Base/MapEvent.md#)|A map event|
|[MapGroup](../messages/Base/MapGroup.md#)|All information about a map group including the list of maps that it contains and its relationship versus other map groups \(not implemented yet\)|
|[MapGroupHandle](../messages/Base/MapGroupHandle.md#)|Reference to a specific map group \(not implemented yet\)|
|[MapGroupList](../messages/Base/MapGroupList.md#)|Array of map groups \(not implemented yet\)|
|[MapHandle](../messages/Base/MapHandle.md#)|Reference to a specific map|
|[MapList](../messages/Base/MapList.md#)|Array of maps|
|[Mapping](../messages/Base/Mapping.md#)|All information about a mapping including the controller to which it is associated, the array of map groups it contains, the currently active map group, the array of maps it contains and the currently active map|
|[MappingHandle](../messages/Base/MappingHandle.md#)|Reference to a specific Mapping|
|[MappingInfoNotification](../messages/Base/MappingInfoNotification.md#)|Notification about a single mapping information event|
|[MappingInfoNotificationList](../messages/Base/MappingInfoNotificationList.md#)|Array of mapping information notifications|
|[MappingList](../messages/Base/MappingList.md#)|Array of mappings|
|[NetworkHandle](../messages/Base/NetworkHandle.md#)|Reference to a network|
|[NetworkNotification](../messages/Base/NetworkNotification.md#)|Notification about a single network event|
|[NetworkNotificationList](../messages/Base/NetworkNotificationList.md#)|Array of network event notifications|
|[OperatingModeInformation](../messages/Base/OperatingModeInformation.md#)|Information about the operating mode|
|[OperatingModeNotification](../messages/Base/OperatingModeNotification.md#)|Notification about a single operating mode event|
|[OperatingModeNotificationList](../messages/Base/OperatingModeNotificationList.md#)|Array of operating mode notifications|
|[Orientation](../messages/Base/Orientation.md#)|A Cartesian tool orientation. Defines orientation as sequence of three Euler angles using z-y-x Tait-Bryan extrinsic convention. That is, rotation around fixed X-axis, then rotation around fixed Y-axis, then rotation around fixed Z-axis.|
|[PasswordChange](../messages/Base/PasswordChange.md#)|Information required to change user password|
|[Point](../messages/Base/Point.md#)|Coordinates of a Cartesian point|
|[Pose](../messages/Base/Pose.md#)|A Cartesian tool pose \(position and orientation\). Orientation is defined as a sequence of three Euler angles using z-y-x Tait-Bryan extrinsic convention. That is, rotation around fixed X-axis, then rotation around fixed Y-axis, then rotation around fixed Z-axis.|
|[Position](../messages/Base/Position.md#)|A Cartesian tool position|
|[PreComputedJointTrajectory](../messages/Base/PreComputedJointTrajectory.md#)|Pre-computed joint trajectory subject to specified continuity constraints. The starting point of the trajectory must have an elapsed time of 0 ms and the angular values must reflect the current state of the robot. The robot control libraries will validate the trajectory fulfills the specified continuity constraints before playing the trajectory.|
|[PreComputedJointTrajectoryElement](../messages/Base/PreComputedJointTrajectoryElement.md#)|Set of angle, speed, acceleration, and elapsed time values for each joint for a given 1 ms interval. A PreComputedJointTrajectory is made up of a series of these elements.|
|[ProtectionZone](../messages/Base/ProtectionZone.md#)|Protection zone configuration|
|[ProtectionZoneHandle](../messages/Base/ProtectionZoneHandle.md#)|Reference to a specific protection zone|
|[ProtectionZoneInformation](../messages/Base/ProtectionZoneInformation.md#)|Information about a protection zone event|
|[ProtectionZoneList](../messages/Base/ProtectionZoneList.md#)|Array of protection zones|
|[ProtectionZoneNotification](../messages/Base/ProtectionZoneNotification.md#)|Notification about a single protection zone event|
|[ProtectionZoneNotificationList](../messages/Base/ProtectionZoneNotificationList.md#)|Array of protection zone notifications|
|[Query](../messages/Base/Query.md#)|Parameters of an event log query \(not implemented yet\)|
|[RequestedActionType](../messages/Base/RequestedActionType.md#)|Message used for requesting all action instances of a specific action type|
|[RobotEventNotification](../messages/Base/RobotEventNotification.md#)|Notification about a single robot event|
|[RobotEventNotificationList](../messages/Base/RobotEventNotificationList.md#)|Array of robot event notifications|
|[RotationMatrix](../messages/Base/RotationMatrix.md#)|Representation of a 3x3 rotation matrix. To be a valid rotation matrix, the rows must be orthonormal \(the rows must each have norm of 1 and the row vectors must be orthogonal to each other\). The determinant of the matrix must also be +1.|
|[RotationMatrixRow](../messages/Base/RotationMatrixRow.md#)|Single row of a 3x3 rotation matrix. To be a valid possible row of a rotation matrix, the norm of the row must be 1 \(the sum of the squares of the row elements has to equal 1\).|
|[SafetyEvent](../messages/Base/SafetyEvent.md#)|A safety event \(not implemented yet\)|
|[SafetyNotificationList](../messages/Base/SafetyNotificationList.md#)|Array of safety notifications|
|[Sequence](../messages/Base/Sequence.md#)|Information about a sequence|
|[SequenceHandle](../messages/Base/SequenceHandle.md#)|Reference to a specific sequence|
|[SequenceInfoNotification](../messages/Base/SequenceInfoNotification.md#)|Notification about a single sequence information event|
|[SequenceInfoNotificationList](../messages/Base/SequenceInfoNotificationList.md#)|Array of sequence information notifications|
|[SequenceInformation](../messages/Base/SequenceInformation.md#)|Information about a sequence|
|[SequenceList](../messages/Base/SequenceList.md#)|An array of sequences|
|[SequenceTask](../messages/Base/SequenceTask.md#)|Information on a single task within a sequence|
|[SequenceTaskHandle](../messages/Base/SequenceTaskHandle.md#)|Reference to a specific task inside a sequence|
|[ServoingModeInformation](../messages/Base/ServoingModeInformation.md#)|Information about the servoing mode|
|[ServoingModeNotification](../messages/Base/ServoingModeNotification.md#)|Notification about a single servoing mode event|
|[ServoingModeNotificationList](../messages/Base/ServoingModeNotificationList.md#)|Array of servoing mode notifications|
|[Ssid](../messages/Base/Ssid.md#)|Wi-Fi SSID|
|[Stop](../messages/Base/Stop.md#)|Action to stop robot movement|
|[SwitchControlMapping](../messages/Base/SwitchControlMapping.md#)|Action parameter to switch the active controller map|
|[SystemTime](../messages/Base/SystemTime.md#)|Identifies the system time \(not implemented yet\)|
|[Timeout](../messages/Base/Timeout.md#)|Timeout for a specified duration|
|[TrajectoryErrorElement](../messages/Base/TrajectoryErrorElement.md#)|Details for a single trajectory validation error|
|[TrajectoryErrorReport](../messages/Base/TrajectoryErrorReport.md#)|Report collecting information on different validation errors for a particular trajectory|
|[TransformationMatrix](../messages/Base/TransformationMatrix.md#)|A 4x4 homogeneous transformation matrix representing the transformation between two reference frames.|
|[TransformationRow](../messages/Base/TransformationRow.md#)|A single row of a 4x4 homogeneous transformation matrix|
|[Twist](../messages/Base/Twist.md#)|A twist \(linear and angular velocity\).|
|[TwistCommand](../messages/Base/TwistCommand.md#)|A twist command to be applied to the tool|
|[TwistLimitation](../messages/Base/TwistLimitation.md#)|Linear and angular speed limitations for twist configuration|
|[UserList](../messages/Base/UserList.md#)|Array of user profile handles|
|[UserNotification](../messages/Base/UserNotification.md#)|Notification about a single user event|
|[UserNotificationList](../messages/Base/UserNotificationList.md#)|Array of user notifications|
|[UserProfile](../messages/Base/UserProfile.md#)|Information about a user|
|[UserProfileList](../messages/Base/UserProfileList.md#)|Array of user profiles|
|[WifiConfiguration](../messages/Base/WifiConfiguration.md#)|Wi-Fi connection configuration|
|[WifiConfigurationList](../messages/Base/WifiConfigurationList.md#)|Array of Wi-Fi connection configuration for different networks|
|[WifiInformation](../messages/Base/WifiInformation.md#)|Information about a specific Wi-Fi network|
|[WifiInformationList](../messages/Base/WifiInformationList.md#)|Array of information about different Wi-Fi networks|
|[Wrench](../messages/Base/Wrench.md#)|A wrench \(force and torque\)|
|[WrenchCommand](../messages/Base/WrenchCommand.md#)|A wrench command to be applied to the tool|
|[WrenchLimitation](../messages/Base/WrenchLimitation.md#)|Force and torque limitations for wrench configuration|
|[ZoneShape](../messages/Base/ZoneShape.md#)|Protection zone shape description|

 **Enumerators** 

|Enumerator|Description|
|----------|-----------|
|[ActionEvent](../enums/Base/ActionEvent.md#)|Admissible action event types|
|[ActionType](../enums/Base/ActionType.md#)|Admissible types of actions|
|[AdmittanceMode](../enums/Base/AdmittanceMode.md#)|Admissible admittance modes|
|[BackupEvent](../enums/Base/BackupEvent.md#)|Admissible backup events \(not implemented yet\)|
|[BridgeStatus](../enums/Base/BridgeStatus.md#)|Bridge operation status|
|[BridgeType](../enums/Base/BridgeType.md#)|Type of port forward bridge to create|
|[CapSenseMode](../enums/Base/CapSenseMode.md#)|Admissible capacitive sensor modes|
|[ConfigurationNotificationEvent](../enums/Base/ConfigurationNotificationEvent.md#)|Admissible configuration events|
|[ControlMode](../enums/Base/ControlMode.md#)|Admissible robot control modes|
|[ControllerBehavior](../enums/Base/ControllerBehavior.md#)|Admissible controller input behaviors|
|[ControllerElementEventType](../enums/Base/ControllerElementEventType.md#)|Admissible controller element event types|
|[ControllerEventType](../enums/Base/ControllerEventType.md#)|Admissible controller event types|
|[ControllerInputType](../enums/Base/ControllerInputType.md#)|Admissible controller input types|
|[ControllerType](../enums/Base/ControllerType.md#)|Admissible controller types|
|[EventIdSequenceInfoNotification](../enums/Base/EventIdSequenceInfoNotification.md#)|Admissible sequence event types|
|[FactoryEvent](../enums/Base/FactoryEvent.md#)|Admissible factory events|
|[GpioState](../enums/Base/GpioState.md#)|Admissible GPIO states \(not implemented yet\)|
|[GripperMode](../enums/Base/GripperMode.md#)|Admissible gripper control mode|
|[JointNavigationDirection](../enums/Base/JointNavigationDirection.md#)|Admissible joint navigation directions|
|[JointTrajectoryConstraintType](../enums/Base/JointTrajectoryConstraintType.md#)|Admissible constraint types that can be applied when controlling a joint in trajectory mode|
|[LedState](../enums/Base/LedState.md#)|Admissible LED states \(not implemented yet\)|
|[LimitationType](../enums/Base/LimitationType.md#)|Admissible limitation types|
|[NavigationDirection](../enums/Base/NavigationDirection.md#)|Admissible map navigation directions|
|[NetworkEvent](../enums/Base/NetworkEvent.md#)|Admissible network events|
|[NetworkType](../enums/Base/NetworkType.md#)|Admissible network types|
|[OperatingMode](../enums/Base/OperatingMode.md#)|Admissible robot operating modes \(used to report robot firmware upgrade current state\)|
|[ProtectionZoneEvent](../enums/Base/ProtectionZoneEvent.md#)|Admissible protection zone events|
|[RobotEvent](../enums/Base/RobotEvent.md#)|Admissible robot events|
|[SafetyIdentifier](../enums/Base/SafetyIdentifier.md#)|Admissible Base safeties. Used with BaseCyclic.BaseFeedback.\[fault\_bank\_a | fault\_bank\_b | warning\_bank\_a | warning\_bank\_b\]|
|[ServiceVersion](../enums/Base/ServiceVersion.md#)|Identifies Base service current version|
|[ServoingMode](../enums/Base/ServoingMode.md#)|Admissible servoing modes|
|[ShapeType](../enums/Base/ShapeType.md#)|Admissible protection zone shape types|
|[SignalQuality](../enums/Base/SignalQuality.md#)|Admissible signal quality values|
|[SoundType](../enums/Base/SoundType.md#)|Admissible sound types \(not implemented yet\)|
|[TrajectoryContinuityMode](../enums/Base/TrajectoryContinuityMode.md#)|Admissible trajectory continuity mode|
|[TrajectoryErrorIdentifier](../enums/Base/TrajectoryErrorIdentifier.md#)|Trajectory validation error identifiers|
|[TrajectoryErrorType](../enums/Base/TrajectoryErrorType.md#)|Trajectory validation error types|
|[UserEvent](../enums/Base/UserEvent.md#)|Admissible user event types|
|[WifiEncryptionType](../enums/Base/WifiEncryptionType.md#)|Admissible Wi-Fi encryption types|
|[WifiSecurityType](../enums/Base/WifiSecurityType.md#)|Admissible Wi-Fi Security types|
|[WrenchMode](../enums/Base/WrenchMode.md#)|Admissible wrench \(force\) modes|
|[Xbox360AnalogInputIdentifier](../enums/Base/Xbox360AnalogInputIdentifier.md#)|Admissible XBOX360 analog inputs|
|[Xbox360DigitalInputIdentifier](../enums/Base/Xbox360DigitalInputIdentifier.md#)|Admissible XBOX360 digital inputs|

Base service. Broadly useful service. Provides functions for configuring a range of base-related functionalities and for enabling high-level control for the robot.

 **Services** 

|Function name|Return type|Input type|Description|
|-------------|-----------|----------|-----------|
|CreateUserProfile|[UserProfileHandle](../messages/Common/UserProfileHandle.md#)|[FullUserProfile](../messages/Base/FullUserProfile.md#)|Creates a user profile and returns a handle to the profile|
|UpdateUserProfile|[Empty](../messages/Common/Empty.md#)|[UserProfile](../messages/Base/UserProfile.md#)|Updates an existing user profile|
|ReadUserProfile|[UserProfile](../messages/Base/UserProfile.md#)|[UserProfileHandle](../messages/Common/UserProfileHandle.md#)|Retrieves an existing user profile|
|DeleteUserProfile|[Empty](../messages/Common/Empty.md#)|[UserProfileHandle](../messages/Common/UserProfileHandle.md#)|Deletes an existing user profile|
|ReadAllUserProfiles|[UserProfileList](../messages/Base/UserProfileList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves all user profiles|
|ReadAllUsers|[UserList](../messages/Base/UserList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves the list of all user profile handles|
|ChangePassword|[Empty](../messages/Common/Empty.md#)|[PasswordChange](../messages/Base/PasswordChange.md#)|Changes the password of an existing user|
|CreateSequence|[SequenceHandle](../messages/Base/SequenceHandle.md#)|[Sequence](../messages/Base/Sequence.md#)|Creates a new sequence and returns a handle to the sequence|
|UpdateSequence|[Empty](../messages/Common/Empty.md#)|[Sequence](../messages/Base/Sequence.md#)|Updates an existing sequence|
|ReadSequence|[Sequence](../messages/Base/Sequence.md#)|[SequenceHandle](../messages/Base/SequenceHandle.md#)|Retrieves an existing sequence|
|DeleteSequence|[Empty](../messages/Common/Empty.md#)|[SequenceHandle](../messages/Base/SequenceHandle.md#)|Deletes an existing sequence|
|ReadAllSequences|[SequenceList](../messages/Base/SequenceList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves the list of all existing sequences|
|DeleteSequenceTask|[Empty](../messages/Common/Empty.md#)|[SequenceTaskHandle](../messages/Base/SequenceTaskHandle.md#)|Deletes a specific task from the specified sequence|
|DeleteAllSequenceTasks|[Empty](../messages/Common/Empty.md#)|[SequenceHandle](../messages/Base/SequenceHandle.md#)|Deletes all tasks from the specified sequence|
|PlaySequence|[Empty](../messages/Common/Empty.md#)|[SequenceHandle](../messages/Base/SequenceHandle.md#)|Plays an existing sequence|
|PlayAdvancedSequence|[Empty](../messages/Common/Empty.md#)|[AdvancedSequenceHandle](../messages/Base/AdvancedSequenceHandle.md#)|Plays an existing sequence with options|
|StopSequence|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Stops execution of currently playing sequence|
|PauseSequence|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Pauses execution of currently playing sequence|
|ResumeSequence|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Resumes execution of currently paused sequence|
|CreateProtectionZone|[ProtectionZoneHandle](../messages/Base/ProtectionZoneHandle.md#)|[ProtectionZone](../messages/Base/ProtectionZone.md#)|Creates a new protection zone and returns a handle to the protection zone|
|UpdateProtectionZone|[Empty](../messages/Common/Empty.md#)|[ProtectionZone](../messages/Base/ProtectionZone.md#)|Updates an existing protection zone|
|ReadProtectionZone|[ProtectionZone](../messages/Base/ProtectionZone.md#)|[ProtectionZoneHandle](../messages/Base/ProtectionZoneHandle.md#)|Retrieves an existing protection zone|
|DeleteProtectionZone|[Empty](../messages/Common/Empty.md#)|[ProtectionZoneHandle](../messages/Base/ProtectionZoneHandle.md#)|Deletes an existing protection zone|
|ReadAllProtectionZones|[ProtectionZoneList](../messages/Base/ProtectionZoneList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves a list of all protection zones|
|CreateMapping|[MappingHandle](../messages/Base/MappingHandle.md#)|[Mapping](../messages/Base/Mapping.md#)|Creates a new mapping|
|ReadMapping|[Mapping](../messages/Base/Mapping.md#)|[MappingHandle](../messages/Base/MappingHandle.md#)|Retrieves an existing mapping|
|ReadAllMappings|[MappingList](../messages/Base/MappingList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves a list of all mappings|
|CreateMap|[MapHandle](../messages/Base/MapHandle.md#)|[Map](../messages/Base/Map.md#)|Creates a new map|
|ReadAllMaps|[MapList](../messages/Base/MapList.md#)|[MappingHandle](../messages/Base/MappingHandle.md#)|Retrieves a list of all maps associated to the specified mapping|
|ActivateMap|[Empty](../messages/Common/Empty.md#)|[ActivateMapHandle](../messages/Base/ActivateMapHandle.md#)|Activates the specified map within the specified map group and mapping|
|CreateAction|[ActionHandle](../messages/Base/ActionHandle.md#)|[Action](../messages/Base/Action.md#)|Creates a new action|
|ReadAction|[Action](../messages/Base/Action.md#)|[ActionHandle](../messages/Base/ActionHandle.md#)|Retrieves an existing action|
|ReadAllActions|[ActionList](../messages/Base/ActionList.md#)|[RequestedActionType](../messages/Base/RequestedActionType.md#)|Retrieves a list of all existing actions|
|DeleteAction|[Empty](../messages/Common/Empty.md#)|[ActionHandle](../messages/Base/ActionHandle.md#)|Deletes an existing action|
|UpdateAction|[Empty](../messages/Common/Empty.md#)|[Action](../messages/Base/Action.md#)|Updates an existing action|
|ExecuteActionFromReference|[Empty](../messages/Common/Empty.md#)|[ActionHandle](../messages/Base/ActionHandle.md#)|Commands the robot to execute the specified existing action|
|ExecuteAction|[Empty](../messages/Common/Empty.md#)|[Action](../messages/Base/Action.md#)|Commands the robot to execute the specified action|
|PauseAction|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Pauses the currently executed action. ResumeAction can be invoked afterwards|
|StopAction|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Stops the currently executed action. ResumeAction cannot be invoked afterwards|
|ResumeAction|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Resumes execution of the currently paused action|
|GetIPv4Configuration|[IPv4Configuration](../messages/Base/IPv4Configuration.md#)|[NetworkHandle](../messages/Base/NetworkHandle.md#)|Retrieves the IPv4 network configuration for the specified network adapter|
|SetIPv4Configuration|[Empty](../messages/Common/Empty.md#)|[FullIPv4Configuration](../messages/Base/FullIPv4Configuration.md#)|Modifies the IPv4 network configuration for the specified network adapter|
|SetCommunicationInterfaceEnable|[Empty](../messages/Common/Empty.md#)|[CommunicationInterfaceConfiguration](../messages/Base/CommunicationInterfaceConfiguration.md#)|Enables \(or disables\) the specified communication interface|
|IsCommunicationInterfaceEnable|[CommunicationInterfaceConfiguration](../messages/Base/CommunicationInterfaceConfiguration.md#)|[NetworkHandle](../messages/Base/NetworkHandle.md#)|Determines if the specified communication interface is enabled \(or disabled\)|
|GetAvailableWifi|[WifiInformationList](../messages/Base/WifiInformationList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves the list of available Wi-Fi networks|
|GetWifiInformation|[WifiInformation](../messages/Base/WifiInformation.md#)|[Ssid](../messages/Base/Ssid.md#)|Retrieves information about a specific Wi-Fi network|
|AddWifiConfiguration|[Empty](../messages/Common/Empty.md#)|[WifiConfiguration](../messages/Base/WifiConfiguration.md#)|Configures a specific Wi-Fi network|
|DeleteWifiConfiguration|[Empty](../messages/Common/Empty.md#)|[Ssid](../messages/Base/Ssid.md#)|Deletes a specific Wi-Fi network|
|GetAllConfiguredWifis|[WifiConfigurationList](../messages/Base/WifiConfigurationList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves the list of configured Wi-Fi networks|
|ConnectWifi|[Empty](../messages/Common/Empty.md#)|[Ssid](../messages/Base/Ssid.md#)|Connects robot to specified Wi-Fi network|
|DisconnectWifi|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Disconnects the robot from the currently connected Wi-Fi network|
|GetConnectedWifiInformation|[WifiInformation](../messages/Base/WifiInformation.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves information about the connected Wi-Fi network|
|Unsubscribe|[Empty](../messages/Common/Empty.md#)|[NotificationHandle](../messages/Common/NotificationHandle.md#)|Unsubscribes client from receiving notifications for the specified topic|
|ConfigurationChangeTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to configuration change topic for notifications|
|MappingInfoTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to mapping information topic for notifications|
|ControlModeTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to control mode topic for notifications|
|OperatingModeTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to operating mode topic for notifications|
|SequenceInfoTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to sequence information topic for notifications|
|ProtectionZoneTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to protection zone topic for notifications|
|UserTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to user topic for notifications|
|ControllerTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to controller topic for notifications|
|ActionTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to action topic for notifications|
|RobotEventTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to robot event topic for notifications|
|PlayCartesianTrajectory|[Empty](../messages/Common/Empty.md#)|[ConstrainedPose](../messages/Base/ConstrainedPose.md#)|Moves robot to the specifed tool pose \(position and orientation\) while imposing specified constraints|
|PlayCartesianTrajectoryPosition|[Empty](../messages/Common/Empty.md#)|[ConstrainedPosition](../messages/Base/ConstrainedPosition.md#)|Moves robot to the specifed position while imposing specified constraints|
|PlayCartesianTrajectoryOrientation|[Empty](../messages/Common/Empty.md#)|[ConstrainedOrientation](../messages/Base/ConstrainedOrientation.md#)|Moves to the specifed orientation while imposing specified constraints|
|Stop|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Stops robot movement|
|GetMeasuredCartesianPose|[Pose](../messages/Base/Pose.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves the current computed tool pose \(position and orientation\) for the robot|
|SendWrenchCommand|[Empty](../messages/Common/Empty.md#)|[WrenchCommand](../messages/Base/WrenchCommand.md#)|Sends a wrench command \(screw consisting of force and torque\) to be applied to the tool. This method is EXPERIMENTAL.|
|SendWrenchJoystickCommand|[Empty](../messages/Common/Empty.md#)|[WrenchCommand](../messages/Base/WrenchCommand.md#)|Sends a wrench \(screw consisting of force and torque\) joystick command to be applied to the tool. The wrench values sent to this call are expected to be a ratio of maximum value \(between -1.0/+1.0\). This method is EXPERIMENTAL.|
|SendTwistJoystickCommand|[Empty](../messages/Common/Empty.md#)|[TwistCommand](../messages/Base/TwistCommand.md#)|Sends a twist \(screw consisting of linear and angular velocity\) joystick command to be applied to the tool. The twist values sent to this call are expected to be a ratio of the maximum value \(between -1.0/+1.0\).|
|SendTwistCommand|[Empty](../messages/Common/Empty.md#)|[TwistCommand](../messages/Base/TwistCommand.md#)|Sends a twist \(screw consisting of linear and angular velocity\) command to be applied to the tool|
|PlayJointTrajectory|[Empty](../messages/Common/Empty.md#)|[ConstrainedJointAngles](../messages/Base/ConstrainedJointAngles.md#)|Moves joints to the specified joint angles while imposing specified constraints|
|PlaySelectedJointTrajectory|[Empty](../messages/Common/Empty.md#)|[ConstrainedJointAngle](../messages/Base/ConstrainedJointAngle.md#)|Moves specifed joint to the specifed joint angle while imposing specified constraints|
|GetMeasuredJointAngles|[JointAngles](../messages/Base/JointAngles.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves the currently measured joint angles for each joint|
|SendJointSpeedsCommand|[Empty](../messages/Common/Empty.md#)|[JointSpeeds](../messages/Base/JointSpeeds.md#)|Sends a set of joint speed commands to all joints with one command. Joint speed commmands must be sent to all joints. If you do not want to move some of the joints, simply send a speed value of 0 degrees / second for that joint.|
|SendSelectedJointSpeedCommand|[Empty](../messages/Common/Empty.md#)|[JointSpeed](../messages/Base/JointSpeed.md#)|Sends a speed command for a specific joint|
|SendGripperCommand|[Empty](../messages/Common/Empty.md#)|[GripperCommand](../messages/Base/GripperCommand.md#)|Sends a command to move the gripper|
|GetMeasuredGripperMovement|[Gripper](../messages/Base/Gripper.md#)|[GripperRequest](../messages/Base/GripperRequest.md#)|Retrieves the current gripper movement, that is the current gripper position, force or speed|
|SetAdmittance|[Empty](../messages/Common/Empty.md#)|[Admittance](../messages/Base/Admittance.md#)|Sets the robot in the chosen admittance mode|
|SetOperatingMode|[Empty](../messages/Common/Empty.md#)|[OperatingModeInformation](../messages/Base/OperatingModeInformation.md#)|Sets a new operating mode. Only Maintenance, Update and Run modes are permitted.|
|ApplyEmergencyStop|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Stops robot movement and activates emergency stop state. You will not be able to move the robot. Use ClearFaults\(\) to clear the stop.|
|ClearFaults|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Clears robot stop. Robot is permitted to move again.|
|GetControlMode|[ControlModeInformation](../messages/Base/ControlModeInformation.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves current control mode|
|GetOperatingMode|[OperatingModeInformation](../messages/Base/OperatingModeInformation.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves current operating mode|
|SetServoingMode|[Empty](../messages/Common/Empty.md#)|[ServoingModeInformation](../messages/Base/ServoingModeInformation.md#)|Sets the servoing mode|
|GetServoingMode|[ServoingModeInformation](../messages/Base/ServoingModeInformation.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves current servoing mode|
|ServoingModeTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to servoing mode topic for notifications|
|RestoreFactorySettings|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Deletes all configurations and reverts settings to their factory defaults \(except network settings\)|
|Reboot|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Reboots the robot|
|FactoryTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to factory topic for notifications|
|GetAllConnectedControllers|[ControllerList](../messages/Base/ControllerList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves the list of all connected controllers|
|GetControllerState|[ControllerState](../messages/Base/ControllerState.md#)|[ControllerHandle](../messages/Base/ControllerHandle.md#)|Retrieves the state of a specified controller|
|GetActuatorCount|[ActuatorInformation](../messages/Base/ActuatorInformation.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves the number of actuators in the robot|
|StartWifiScan|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Initiates Wi-Fi scanning|
|GetConfiguredWifi|[WifiConfiguration](../messages/Base/WifiConfiguration.md#)|[Ssid](../messages/Base/Ssid.md#)|Retrieves a configured Wi-Fi network|
|NetworkTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to network event notifications|
|GetArmState|[ArmStateInformation](../messages/Base/ArmStateInformation.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves current robot arm state|
|ArmStateTopic|[NotificationHandle](../messages/Common/NotificationHandle.md#)|[NotificationOptions](../messages/Common/NotificationOptions.md#)|Subscribes to robot arm state notifications|
|GetIPv4Information|[IPv4Information](../messages/Base/IPv4Information.md#)|[NetworkHandle](../messages/Base/NetworkHandle.md#)|Retrieves the IPv4 network information for the specified network adapter|
|SetWifiCountryCode|[Empty](../messages/Common/Empty.md#)|[CountryCode](../messages/Common/CountryCode.md#)|Sets the Wi-Fi country code|
|GetWifiCountryCode|[CountryCode](../messages/Common/CountryCode.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves the Wi-Fi country code|
|SetCapSenseConfig|[Empty](../messages/Common/Empty.md#)|[CapSenseConfig](../messages/Base/CapSenseConfig.md#)|Configures capacitive sensor on the gripper or wrist|
|GetCapSenseConfig|[CapSenseConfig](../messages/Base/CapSenseConfig.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves configuration of capacitive sensor on the gripper or wrist|
|GetAllJointsSpeedHardLimitation|[JointsLimitationsList](../messages/Base/JointsLimitationsList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves speed hard limits for all joints|
|GetAllJointsTorqueHardLimitation|[JointsLimitationsList](../messages/Base/JointsLimitationsList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves torque hard limits for all joints|
|GetTwistHardLimitation|[TwistLimitation](../messages/Base/TwistLimitation.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves twist hard limitations|
|GetWrenchHardLimitation|[WrenchLimitation](../messages/Base/WrenchLimitation.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves wrench hard limitations|
|SendJointSpeedsJoystickCommand|[Empty](../messages/Common/Empty.md#)|[JointSpeeds](../messages/Base/JointSpeeds.md#)|Sends the desired joystick speeds to all joints with one command. The speed values sent to this call are expected to be a ratio of the maximum value \(between -1.0/+1.0\) Speeds must be sent to all joints. If you don't want to move some of the joints, send a value of 0.|
|SendSelectedJointSpeedJoystickCommand|[Empty](../messages/Common/Empty.md#)|[JointSpeed](../messages/Base/JointSpeed.md#)|Sends a joystick speed for a specific joint. The speed value sent to this call is expected to be a ratio of the maximum value \(between -1.0/+1.0\)|
|EnableBridge|[BridgeResult](../messages/Base/BridgeResult.md#)|[BridgeConfig](../messages/Base/BridgeConfig.md#)|Enables TCP bridge to hardware device|
|DisableBridge|[BridgeResult](../messages/Base/BridgeResult.md#)|[BridgeIdentifier](../messages/Base/BridgeIdentifier.md#)|Disables specified TCP bridge|
|GetBridgeList|[BridgeList](../messages/Base/BridgeList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves list of created bridges|
|GetBridgeConfig|[BridgeConfig](../messages/Base/BridgeConfig.md#)|[BridgeIdentifier](../messages/Base/BridgeIdentifier.md#)|Retrieves configuration for specified bridge|
|PlayPreComputedJointTrajectory|[Empty](../messages/Common/Empty.md#)|[PreComputedJointTrajectory](../messages/Base/PreComputedJointTrajectory.md#)|Plays a pre-computed angular trajectory|
|GetProductConfiguration|[CompleteProductConfiguration](../messages/ProductConfiguration/CompleteProductConfiguration.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves product configuration information|
|UpdateDegreeOfFreedomConfiguration|[Empty](../messages/Common/Empty.md#)|[ProductConfigurationDegreeOfFreedom](../messages/ProductConfiguration/ProductConfigurationDegreeOfFreedom.md#)|Set new value for Degree of Freedom in product configuration \(Identification Number\)|
|UpdateBaseTypeConfiguration|[Empty](../messages/Common/Empty.md#)|[ProductConfigurationBaseType](../messages/ProductConfiguration/ProductConfigurationBaseType.md#)|Set new Base type in product configuration \(Identification Number\)|
|UpdateEndEffectorTypeConfiguration|[Empty](../messages/Common/Empty.md#)|[ProductConfigurationEndEffectorType](../messages/ProductConfiguration/ProductConfigurationEndEffectorType.md#)|Set new end-effector type in product configuration \(Identification Number\)|
|UpdateVisionModuleTypeConfiguration|[Empty](../messages/Common/Empty.md#)|[ProductConfigurationVisionModuleType](../messages/ProductConfiguration/ProductConfigurationVisionModuleType.md#)|Set new vision module type in product configuration \(Identification Number\)|
|UpdateInterfaceModuleTypeConfiguration|[Empty](../messages/Common/Empty.md#)|[ProductConfigurationInterfaceModuleType](../messages/ProductConfiguration/ProductConfigurationInterfaceModuleType.md#)|Set new interface module type in product configuration \(Identification Number\)|
|UpdateArmLateralityConfiguration|[Empty](../messages/Common/Empty.md#)|[ProductConfigurationLaterality](../messages/ProductConfiguration/ProductConfigurationLaterality.md#)|Set new arm laterality in product configuration \(Identification Number\)|
|UpdateWristTypeConfiguration|[Empty](../messages/Common/Empty.md#)|[ProductConfigurationWristType](../messages/ProductConfiguration/ProductConfigurationWristType.md#)|Sets new wrist type in product configuration \(Identification Number\)|
|RestoreFactoryProductConfiguration|[Empty](../messages/Common/Empty.md#)|[Empty](../messages/Common/Empty.md#)|Restores product configuration to factory product configuration|
|GetTrajectoryErrorReport|[TrajectoryErrorReport](../messages/Base/TrajectoryErrorReport.md#)|[Empty](../messages/Common/Empty.md#)|Obtains trajectory error report listing errors for rejected trajectory. Provides some feedback on why the trajectory could not be completed.|
|GetAllJointsSpeedSoftLimitation|[JointsLimitationsList](../messages/Base/JointsLimitationsList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves list of soft speed limits for all joints|
|GetAllJointsTorqueSoftLimitation|[JointsLimitationsList](../messages/Base/JointsLimitationsList.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves list of soft torque limits for all joints|
|GetTwistSoftLimitation|[TwistLimitation](../messages/Base/TwistLimitation.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves all twist soft limitations|
|GetWrenchSoftLimitation|[WrenchLimitation](../messages/Base/WrenchLimitation.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves all wrench soft limitations|

