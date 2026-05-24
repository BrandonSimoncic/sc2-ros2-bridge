// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sc2_bridge_interfaces:msg/ContactMarkArray.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK_ARRAY__STRUCT_H_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK_ARRAY__STRUCT_H_

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
// Member 'marks'
#include "sc2_bridge_interfaces/msg/detail/contact_mark__struct.h"

/// Struct defined in msg/ContactMarkArray in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__msg__ContactMarkArray
{
  std_msgs__msg__Header header;
  sc2_bridge_interfaces__msg__ContactMark__Sequence marks;
} sc2_bridge_interfaces__msg__ContactMarkArray;

// Struct for a sequence of sc2_bridge_interfaces__msg__ContactMarkArray.
typedef struct sc2_bridge_interfaces__msg__ContactMarkArray__Sequence
{
  sc2_bridge_interfaces__msg__ContactMarkArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__msg__ContactMarkArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK_ARRAY__STRUCT_H_
