// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sc2_bridge_interfaces:msg/ContactMark.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__STRUCT_H_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_VISIBLE'.
enum
{
  sc2_bridge_interfaces__msg__ContactMark__STATUS_VISIBLE = 0
};

/// Constant 'STATUS_FOGGED'.
enum
{
  sc2_bridge_interfaces__msg__ContactMark__STATUS_FOGGED = 1
};

/// Constant 'STATUS_DESTROYED'.
enum
{
  sc2_bridge_interfaces__msg__ContactMark__STATUS_DESTROYED = 2
};

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'first_seen'
// Member 'last_seen'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/ContactMark in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__msg__ContactMark
{
  uint32_t mark_id;
  uint64_t tag;
  uint32_t unit_type;
  uint8_t alliance;
  geometry_msgs__msg__Point position;
  builtin_interfaces__msg__Time first_seen;
  builtin_interfaces__msg__Time last_seen;
  uint8_t status;
} sc2_bridge_interfaces__msg__ContactMark;

// Struct for a sequence of sc2_bridge_interfaces__msg__ContactMark.
typedef struct sc2_bridge_interfaces__msg__ContactMark__Sequence
{
  sc2_bridge_interfaces__msg__ContactMark * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__msg__ContactMark__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__STRUCT_H_
