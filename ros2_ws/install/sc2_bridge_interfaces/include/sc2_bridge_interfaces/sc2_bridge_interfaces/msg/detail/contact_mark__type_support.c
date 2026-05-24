// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sc2_bridge_interfaces:msg/ContactMark.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sc2_bridge_interfaces/msg/detail/contact_mark__rosidl_typesupport_introspection_c.h"
#include "sc2_bridge_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sc2_bridge_interfaces/msg/detail/contact_mark__functions.h"
#include "sc2_bridge_interfaces/msg/detail/contact_mark__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `first_seen`
// Member `last_seen`
#include "builtin_interfaces/msg/time.h"
// Member `first_seen`
// Member `last_seen`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sc2_bridge_interfaces__msg__ContactMark__init(message_memory);
}

void sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_fini_function(void * message_memory)
{
  sc2_bridge_interfaces__msg__ContactMark__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_member_array[8] = {
  {
    "mark_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__ContactMark, mark_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__ContactMark, tag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unit_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__ContactMark, unit_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alliance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__ContactMark, alliance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__ContactMark, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "first_seen",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__ContactMark, first_seen),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_seen",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__ContactMark, last_seen),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__ContactMark, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_members = {
  "sc2_bridge_interfaces__msg",  // message namespace
  "ContactMark",  // message name
  8,  // number of fields
  sizeof(sc2_bridge_interfaces__msg__ContactMark),
  sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_member_array,  // message members
  sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_init_function,  // function to initialize message memory (memory has to be allocated)
  sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_type_support_handle = {
  0,
  &sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, msg, ContactMark)() {
  sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_type_support_handle.typesupport_identifier) {
    sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sc2_bridge_interfaces__msg__ContactMark__rosidl_typesupport_introspection_c__ContactMark_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
