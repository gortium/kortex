# ActuatorCyclic \(Python\)

This page describes the Python ActuatorCyclic API.

## Class reference

This section describes the data classes used in this API, as well as their member values and member functions.

 **Messages** 

|Class|Description|
|-----|-----------|
|[Command](../messages/ActuatorCyclic/Command.md#)|Defines an actuator command|
|[CustomData](../messages/ActuatorCyclic/CustomData.md#)|Custom development data, content varies according to debug needs|
|[Feedback](../messages/ActuatorCyclic/Feedback.md#)|Status feedback provided by an actuator|
|[MessageId](../messages/ActuatorCyclic/MessageId.md#)|Provides a message identifier|

 **Enumerators** 

|Enumerator|Description|
|----------|-----------|
|[CommandFlags](../enums/ActuatorCyclic/CommandFlags.md#)|Identifies actuator commands|
|[ServiceVersion](../enums/ActuatorCyclic/ServiceVersion.md#)|Identifies ActuatorCyclic service current version|
|[StatusFlags](../enums/ActuatorCyclic/StatusFlags.md#)|Identifies actuator status|

Service to exchange cyclic data with an actuator

 **Services** 

|Function name|Return type|Input type|Description|
|-------------|-----------|----------|-----------|
|Refresh|[Feedback](../messages/ActuatorCyclic/Feedback.md#)|[Command](../messages/ActuatorCyclic/Command.md#)|Sends a command to a single actuator and receives feedback on status of that actuator|
|RefreshCommand|[Empty](../messages/Common/Empty.md#)|[Command](../messages/ActuatorCyclic/Command.md#)|Sends a command to a single actuator without feedback|
|RefreshFeedback|[Feedback](../messages/ActuatorCyclic/Feedback.md#)|[MessageId](../messages/ActuatorCyclic/MessageId.md#)|Obtains feedback from a single actuator|
|RefreshCustomData|[CustomData](../messages/ActuatorCyclic/CustomData.md#)|[MessageId](../messages/ActuatorCyclic/MessageId.md#)|Obtains custom data from a single actuator|

