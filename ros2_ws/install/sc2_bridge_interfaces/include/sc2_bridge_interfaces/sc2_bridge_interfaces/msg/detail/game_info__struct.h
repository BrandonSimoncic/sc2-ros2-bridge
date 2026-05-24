// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sc2_bridge_interfaces:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__STRUCT_H_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'map_name'
// Member 'game_version'
// Member 'world_frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'playable_min'
// Member 'playable_max'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/GameInfo in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__msg__GameInfo
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String map_name;
  rosidl_runtime_c__String game_version;
  bool realtime;
  rosidl_runtime_c__String world_frame_id;
  geometry_msgs__msg__Point playable_min;
  geometry_msgs__msg__Point playable_max;
} sc2_bridge_interfaces__msg__GameInfo;

// Struct for a sequence of sc2_bridge_interfaces__msg__GameInfo.
typedef struct sc2_bridge_interfaces__msg__GameInfo__Sequence
{
  sc2_bridge_interfaces__msg__GameInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__msg__GameInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__STRUCT_H_
