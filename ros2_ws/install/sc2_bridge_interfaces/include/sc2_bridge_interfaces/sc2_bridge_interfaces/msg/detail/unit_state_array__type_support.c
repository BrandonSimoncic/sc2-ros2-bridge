// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sc2_bridge_interfaces:msg/UnitStateArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sc2_bridge_interfaces/msg/detail/unit_state_array__rosidl_typesupport_introspection_c.h"
#include "sc2_bridge_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sc2_bridge_interfaces/msg/detail/unit_state_array__functions.h"
#include "sc2_bridge_interfaces/msg/detail/unit_state_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `units`
#include "sc2_bridge_interfaces/msg/unit_state.h"
// Member `units`
#include "sc2_bridge_interfaces/msg/detail/unit_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sc2_bridge_interfaces__msg__UnitStateArray__init(message_memory);
}

void sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_fini_function(void * message_memory)
{
  sc2_bridge_interfaces__msg__UnitStateArray__fini(message_memory);
}

size_t sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__size_function__UnitStateArray__units(
  const void * untyped_member)
{
  const sc2_bridge_interfaces__msg__UnitState__Sequence * member =
    (const sc2_bridge_interfaces__msg__UnitState__Sequence *)(untyped_member);
  return member->size;
}

const void * sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__get_const_function__UnitStateArray__units(
  const void * untyped_member, size_t index)
{
  const sc2_bridge_interfaces__msg__UnitState__Sequence * member =
    (const sc2_bridge_interfaces__msg__UnitState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__get_function__UnitStateArray__units(
  void * untyped_member, size_t index)
{
  sc2_bridge_interfaces__msg__UnitState__Sequence * member =
    (sc2_bridge_interfaces__msg__UnitState__Sequence *)(untyped_member);
  return &member->data[index];
}

void sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__fetch_function__UnitStateArray__units(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sc2_bridge_interfaces__msg__UnitState * item =
    ((const sc2_bridge_interfaces__msg__UnitState *)
    sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__get_const_function__UnitStateArray__units(untyped_member, index));
  sc2_bridge_interfaces__msg__UnitState * value =
    (sc2_bridge_interfaces__msg__UnitState *)(untyped_value);
  *value = *item;
}

void sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__assign_function__UnitStateArray__units(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sc2_bridge_interfaces__msg__UnitState * item =
    ((sc2_bridge_interfaces__msg__UnitState *)
    sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__get_function__UnitStateArray__units(untyped_member, index));
  const sc2_bridge_interfaces__msg__UnitState * value =
    (const sc2_bridge_interfaces__msg__UnitState *)(untyped_value);
  *item = *value;
}

bool sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__resize_function__UnitStateArray__units(
  void * untyped_member, size_t size)
{
  sc2_bridge_interfaces__msg__UnitState__Sequence * member =
    (sc2_bridge_interfaces__msg__UnitState__Sequence *)(untyped_member);
  sc2_bridge_interfaces__msg__UnitState__Sequence__fini(member);
  return sc2_bridge_interfaces__msg__UnitState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitStateArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "game_loop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitStateArray, game_loop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "units",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitStateArray, units),  // bytes offset in struct
    NULL,  // default value
    sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__size_function__UnitStateArray__units,  // size() function pointer
    sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__get_const_function__UnitStateArray__units,  // get_const(index) function pointer
    sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__get_function__UnitStateArray__units,  // get(index) function pointer
    sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__fetch_function__UnitStateArray__units,  // fetch(index, &value) function pointer
    sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__assign_function__UnitStateArray__units,  // assign(index, value) function pointer
    sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__resize_function__UnitStateArray__units  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_message_members = {
  "sc2_bridge_interfaces__msg",  // message namespace
  "UnitStateArray",  // message name
  3,  // number of fields
  sizeof(sc2_bridge_interfaces__msg__UnitStateArray),
  sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_message_member_array,  // message members
  sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_init_function,  // function to initialize message memory (memory has to be allocated)
  sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_message_type_support_handle = {
  0,
  &sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, msg, UnitStateArray)() {
  sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, msg, UnitState)();
  if (!sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_message_type_support_handle.typesupport_identifier) {
    sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sc2_bridge_interfaces__msg__UnitStateArray__rosidl_typesupport_introspection_c__UnitStateArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
