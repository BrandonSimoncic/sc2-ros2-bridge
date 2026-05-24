// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sc2_bridge_interfaces:srv/SpawnUnits.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sc2_bridge_interfaces/srv/detail/spawn_units__rosidl_typesupport_introspection_c.h"
#include "sc2_bridge_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sc2_bridge_interfaces/srv/detail/spawn_units__functions.h"
#include "sc2_bridge_interfaces/srv/detail/spawn_units__struct.h"


// Include directives for member types
// Member `positions`
#include "geometry_msgs/msg/point.h"
// Member `positions`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sc2_bridge_interfaces__srv__SpawnUnits_Request__init(message_memory);
}

void sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_fini_function(void * message_memory)
{
  sc2_bridge_interfaces__srv__SpawnUnits_Request__fini(message_memory);
}

size_t sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__size_function__SpawnUnits_Request__positions(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnUnits_Request__positions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__get_function__SpawnUnits_Request__positions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnUnits_Request__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnUnits_Request__positions(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__assign_function__SpawnUnits_Request__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__get_function__SpawnUnits_Request__positions(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__resize_function__SpawnUnits_Request__positions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_message_member_array[3] = {
  {
    "unit_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__srv__SpawnUnits_Request, unit_type),  // bytes offset in struct
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
    offsetof(sc2_bridge_interfaces__srv__SpawnUnits_Request, owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__srv__SpawnUnits_Request, positions),  // bytes offset in struct
    NULL,  // default value
    sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__size_function__SpawnUnits_Request__positions,  // size() function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnUnits_Request__positions,  // get_const(index) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__get_function__SpawnUnits_Request__positions,  // get(index) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnUnits_Request__positions,  // fetch(index, &value) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__assign_function__SpawnUnits_Request__positions,  // assign(index, value) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__resize_function__SpawnUnits_Request__positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_message_members = {
  "sc2_bridge_interfaces__srv",  // message namespace
  "SpawnUnits_Request",  // message name
  3,  // number of fields
  sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Request),
  sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_message_member_array,  // message members
  sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_message_type_support_handle = {
  0,
  &sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, srv, SpawnUnits_Request)() {
  sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_message_type_support_handle.typesupport_identifier) {
    sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sc2_bridge_interfaces__srv__SpawnUnits_Request__rosidl_typesupport_introspection_c__SpawnUnits_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sc2_bridge_interfaces/srv/detail/spawn_units__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sc2_bridge_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sc2_bridge_interfaces/srv/detail/spawn_units__functions.h"
// already included above
// #include "sc2_bridge_interfaces/srv/detail/spawn_units__struct.h"


// Include directives for member types
// Member `aliases`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `tags`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sc2_bridge_interfaces__srv__SpawnUnits_Response__init(message_memory);
}

void sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_fini_function(void * message_memory)
{
  sc2_bridge_interfaces__srv__SpawnUnits_Response__fini(message_memory);
}

size_t sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__size_function__SpawnUnits_Response__aliases(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_const_function__SpawnUnits_Response__aliases(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_function__SpawnUnits_Response__aliases(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__fetch_function__SpawnUnits_Response__aliases(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_const_function__SpawnUnits_Response__aliases(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__assign_function__SpawnUnits_Response__aliases(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_function__SpawnUnits_Response__aliases(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__resize_function__SpawnUnits_Response__aliases(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__size_function__SpawnUnits_Response__tags(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_const_function__SpawnUnits_Response__tags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_function__SpawnUnits_Response__tags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__fetch_function__SpawnUnits_Response__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_const_function__SpawnUnits_Response__tags(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__assign_function__SpawnUnits_Response__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_function__SpawnUnits_Response__tags(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__resize_function__SpawnUnits_Response__tags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_message_member_array[4] = {
  {
    "aliases",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__srv__SpawnUnits_Response, aliases),  // bytes offset in struct
    NULL,  // default value
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__size_function__SpawnUnits_Response__aliases,  // size() function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_const_function__SpawnUnits_Response__aliases,  // get_const(index) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_function__SpawnUnits_Response__aliases,  // get(index) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__fetch_function__SpawnUnits_Response__aliases,  // fetch(index, &value) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__assign_function__SpawnUnits_Response__aliases,  // assign(index, value) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__resize_function__SpawnUnits_Response__aliases  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__srv__SpawnUnits_Response, tags),  // bytes offset in struct
    NULL,  // default value
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__size_function__SpawnUnits_Response__tags,  // size() function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_const_function__SpawnUnits_Response__tags,  // get_const(index) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__get_function__SpawnUnits_Response__tags,  // get(index) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__fetch_function__SpawnUnits_Response__tags,  // fetch(index, &value) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__assign_function__SpawnUnits_Response__tags,  // assign(index, value) function pointer
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__resize_function__SpawnUnits_Response__tags  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__srv__SpawnUnits_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces__srv__SpawnUnits_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_message_members = {
  "sc2_bridge_interfaces__srv",  // message namespace
  "SpawnUnits_Response",  // message name
  4,  // number of fields
  sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Response),
  sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_message_member_array,  // message members
  sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_message_type_support_handle = {
  0,
  &sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, srv, SpawnUnits_Response)() {
  if (!sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_message_type_support_handle.typesupport_identifier) {
    sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sc2_bridge_interfaces__srv__SpawnUnits_Response__rosidl_typesupport_introspection_c__SpawnUnits_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sc2_bridge_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sc2_bridge_interfaces/srv/detail/spawn_units__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sc2_bridge_interfaces__srv__detail__spawn_units__rosidl_typesupport_introspection_c__SpawnUnits_service_members = {
  "sc2_bridge_interfaces__srv",  // service namespace
  "SpawnUnits",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // sc2_bridge_interfaces__srv__detail__spawn_units__rosidl_typesupport_introspection_c__SpawnUnits_Request_message_type_support_handle,
  NULL  // response message
  // sc2_bridge_interfaces__srv__detail__spawn_units__rosidl_typesupport_introspection_c__SpawnUnits_Response_message_type_support_handle
};

static rosidl_service_type_support_t sc2_bridge_interfaces__srv__detail__spawn_units__rosidl_typesupport_introspection_c__SpawnUnits_service_type_support_handle = {
  0,
  &sc2_bridge_interfaces__srv__detail__spawn_units__rosidl_typesupport_introspection_c__SpawnUnits_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, srv, SpawnUnits_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, srv, SpawnUnits_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sc2_bridge_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, srv, SpawnUnits)() {
  if (!sc2_bridge_interfaces__srv__detail__spawn_units__rosidl_typesupport_introspection_c__SpawnUnits_service_type_support_handle.typesupport_identifier) {
    sc2_bridge_interfaces__srv__detail__spawn_units__rosidl_typesupport_introspection_c__SpawnUnits_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sc2_bridge_interfaces__srv__detail__spawn_units__rosidl_typesupport_introspection_c__SpawnUnits_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, srv, SpawnUnits_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, srv, SpawnUnits_Response)()->data;
  }

  return &sc2_bridge_interfaces__srv__detail__spawn_units__rosidl_typesupport_introspection_c__SpawnUnits_service_type_support_handle;
}
