// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sc2_bridge_interfaces:srv/KillUnits.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__SRV__DETAIL__KILL_UNITS__STRUCT_H_
#define SC2_BRIDGE_INTERFACES__SRV__DETAIL__KILL_UNITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'aliases'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/KillUnits in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__srv__KillUnits_Request
{
  rosidl_runtime_c__String__Sequence aliases;
} sc2_bridge_interfaces__srv__KillUnits_Request;

// Struct for a sequence of sc2_bridge_interfaces__srv__KillUnits_Request.
typedef struct sc2_bridge_interfaces__srv__KillUnits_Request__Sequence
{
  sc2_bridge_interfaces__srv__KillUnits_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__srv__KillUnits_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/KillUnits in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__srv__KillUnits_Response
{
  bool success;
  rosidl_runtime_c__String message;
} sc2_bridge_interfaces__srv__KillUnits_Response;

// Struct for a sequence of sc2_bridge_interfaces__srv__KillUnits_Response.
typedef struct sc2_bridge_interfaces__srv__KillUnits_Response__Sequence
{
  sc2_bridge_interfaces__srv__KillUnits_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__srv__KillUnits_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SC2_BRIDGE_INTERFACES__SRV__DETAIL__KILL_UNITS__STRUCT_H_
