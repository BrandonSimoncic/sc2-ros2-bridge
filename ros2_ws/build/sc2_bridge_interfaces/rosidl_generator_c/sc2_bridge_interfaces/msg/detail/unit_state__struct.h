// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sc2_bridge_interfaces:msg/UnitState.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__STRUCT_H_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALLIANCE_SELF'.
enum
{
  sc2_bridge_interfaces__msg__UnitState__ALLIANCE_SELF = 1
};

/// Constant 'ALLIANCE_ALLY'.
enum
{
  sc2_bridge_interfaces__msg__UnitState__ALLIANCE_ALLY = 2
};

/// Constant 'ALLIANCE_NEUTRAL'.
enum
{
  sc2_bridge_interfaces__msg__UnitState__ALLIANCE_NEUTRAL = 3
};

/// Constant 'ALLIANCE_ENEMY'.
enum
{
  sc2_bridge_interfaces__msg__UnitState__ALLIANCE_ENEMY = 4
};

/// Constant 'DISPLAY_VISIBLE'.
enum
{
  sc2_bridge_interfaces__msg__UnitState__DISPLAY_VISIBLE = 1
};

/// Constant 'DISPLAY_SNAPSHOT'.
enum
{
  sc2_bridge_interfaces__msg__UnitState__DISPLAY_SNAPSHOT = 2
};

/// Constant 'DISPLAY_HIDDEN'.
enum
{
  sc2_bridge_interfaces__msg__UnitState__DISPLAY_HIDDEN = 3
};

/// Constant 'DISPLAY_PLACEHOLDER'.
enum
{
  sc2_bridge_interfaces__msg__UnitState__DISPLAY_PLACEHOLDER = 4
};

// Include directives for member types
// Member 'alias'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'order_ability_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UnitState in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__msg__UnitState
{
  uint64_t tag;
  rosidl_runtime_c__String alias;
  uint32_t unit_type;
  uint32_t owner;
  uint8_t alliance;
  uint8_t display_type;
  geometry_msgs__msg__Point position;
  float facing;
  float radius;
  float health;
  float health_max;
  float energy;
  float energy_max;
  bool is_alive;
  rosidl_runtime_c__uint32__Sequence order_ability_ids;
} sc2_bridge_interfaces__msg__UnitState;

// Struct for a sequence of sc2_bridge_interfaces__msg__UnitState.
typedef struct sc2_bridge_interfaces__msg__UnitState__Sequence
{
  sc2_bridge_interfaces__msg__UnitState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__msg__UnitState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__STRUCT_H_
