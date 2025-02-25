# DeviceManager \(C++\)

This page describes the C++ DeviceManager API.

## Class reference

This section describes the data classes used in this API, as well as their member values and member functions.

 **Messages** 

|Class|Description|
|-----|-----------|
|[DeviceHandles](../messages/DeviceManager/DeviceHandles.md#)|Array of Device handles|

 **Enumerators** 

|Enumerator|Description|
|----------|-----------|
|[ServiceVersion](../enums/DeviceManager/ServiceVersion.md#)|Identifies DeviceManager service current version|

This service provides information about which devices are present in the robot

 **Services** 

|Function name|Return type|Input type|Description|
|-------------|-----------|----------|-----------|
|ReadAllDevices|[DeviceHandles](../messages/DeviceManager/DeviceHandles.md#)|[Empty](../messages/Common/Empty.md#)|Retrieves the list of every device that the system contains, along with its type and order within the system|

