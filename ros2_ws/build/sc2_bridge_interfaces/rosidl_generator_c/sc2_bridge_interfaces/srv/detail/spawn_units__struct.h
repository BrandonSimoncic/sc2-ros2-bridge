// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sc2_bridge_interfaces:srv/SpawnUnits.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__SRV__DETAIL__SPAWN_UNITS__STRUCT_H_
#define SC2_BRIDGE_INTERFACES__SRV__DETAIL__SPAWN_UNITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/SpawnUnits in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__srv__SpawnUnits_Request
{
  uint32_t unit_type;
  uint32_t owner;
  geometry_msgs__msg__Point__Sequence positions;
} sc2_bridge_interfaces__srv__SpawnUnits_Request;

// Struct for a sequence of sc2_bridge_interfaces__srv__SpawnUnits_Request.
typedef struct sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence
{
  sc2_bridge_interfaces__srv__SpawnUnits_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'aliases'
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'tags'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SpawnUnits in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__srv__SpawnUnits_Response
{
  rosidl_runtime_c__String__Sequence aliases;
  rosidl_runtime_c__uint64__Sequence tags;
  bool success;
  rosidl_runtime_c__String message;
} sc2_bridge_interfaces__srv__SpawnUnits_Response;

// Struct for a sequence of sc2_bridge_interfaces__srv__SpawnUnits_Response.
typedef struct sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence
{
  sc2_bridge_interfaces__srv__SpawnUnits_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SC2_BRIDGE_INTERFACES__SRV__DETAIL__SPAWN_UNITS__STRUCT_H_
