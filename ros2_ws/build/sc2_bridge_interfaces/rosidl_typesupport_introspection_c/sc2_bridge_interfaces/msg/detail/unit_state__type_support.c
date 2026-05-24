// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sc2_bridge_interfaces:msg/UnitState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sc2_bridge_interfaces/msg/detail/unit_state__rosidl_typesupport_introspection_c.h"
#include "sc2_bridge_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sc2_bridge_interfaces/msg/detail/unit_state__functions.h"
#include "sc2_bridge_interfaces/msg/detail/unit_state__struct.h"


// Include directives for member types
// Member `alias`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `order_ability_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sc2_bridge_interfaces__msg__UnitState__init(message_memory);
}

void sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_fini_function(void * message_memory)
{
  sc2_bridge_interfaces__msg__UnitState__fini(message_memory);
}

size_t sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__size_function__UnitState__order_ability_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__get_const_function__UnitState__order_ability_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__get_function__UnitState__order_ability_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__fetch_function__UnitState__order_ability_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__get_const_function__UnitState__order_ability_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__assign_function__UnitState__order_ability_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__get_function__UnitState__order_ability_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__resize_function__UnitState__order_ability_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_message_member_array[15] = {
  {
    "tag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, tag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, alias),  // bytes offset in struct
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
    offsetof(sc2_bridge_interfaces__msg__UnitState, unit_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, owner),  // bytes offset in struct
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
    offsetof(sc2_bridge_interfaces__msg__UnitState, alliance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "display_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, display_type),  // bytes offset in struct
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
    offsetof(sc2_bridge_interfaces__msg__UnitState, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "facing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, facing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "health",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, health),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "health_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, health_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "energy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, energy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "energy_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, energy_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_alive",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, is_alive),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "order_ability_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__msg__UnitState, order_ability_ids),  // bytes offset in struct
    NULL,  // default value
    sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__size_function__UnitState__order_ability_ids,  // size() function pointer
    sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__get_const_function__UnitState__order_ability_ids,  // get_const(index) function pointer
    sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__get_function__UnitState__order_ability_ids,  // get(index) function pointer
    sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__fetch_function__UnitState__order_ability_ids,  // fetch(index, &value) function pointer
    sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__assign_function__UnitState__order_ability_ids,  // assign(index, value) function pointer
    sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__resize_function__UnitState__order_ability_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_message_members = {
  "sc2_bridge_interfaces__msg",  // message namespace
  "UnitState",  // message name
  15,  // number of fields
  sizeof(sc2_bridge_interfaces__msg__UnitState),
  sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_message_member_array,  // message members
  sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_init_function,  // function to initialize message memory (memory has to be allocated)
  sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_message_type_support_handle = {
  0,
  &sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, msg, UnitState)() {
  sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_message_type_support_handle.typesupport_identifier) {
    sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sc2_bridge_interfaces__msg__UnitState__rosidl_typesupport_introspection_c__UnitState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
