// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sc2_bridge_interfaces:msg/UnitStateArray.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE_ARRAY__STRUCT_H_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE_ARRAY__STRUCT_H_

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
// Member 'units'
#include "sc2_bridge_interfaces/msg/detail/unit_state__struct.h"

/// Struct defined in msg/UnitStateArray in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__msg__UnitStateArray
{
  std_msgs__msg__Header header;
  uint32_t game_loop;
  sc2_bridge_interfaces__msg__UnitState__Sequence units;
} sc2_bridge_interfaces__msg__UnitStateArray;

// Struct for a sequence of sc2_bridge_interfaces__msg__UnitStateArray.
typedef struct sc2_bridge_interfaces__msg__UnitStateArray__Sequence
{
  sc2_bridge_interfaces__msg__UnitStateArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__msg__UnitStateArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE_ARRAY__STRUCT_H_
