// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sc2_bridge_interfaces:srv/SpawnUnits.idl
// generated code does not contain a copyright notice
#include "sc2_bridge_interfaces/srv/detail/spawn_units__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sc2_bridge_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sc2_bridge_interfaces/srv/detail/spawn_units__struct.h"
#include "sc2_bridge_interfaces/srv/detail/spawn_units__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // positions

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sc2_bridge_interfaces
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sc2_bridge_interfaces
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _SpawnUnits_Request__ros_msg_type = sc2_bridge_interfaces__srv__SpawnUnits_Request;

static bool _SpawnUnits_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpawnUnits_Request__ros_msg_type * ros_message = static_cast<const _SpawnUnits_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: unit_type
  {
    cdr << ros_message->unit_type;
  }

  // Field name: owner
  {
    cdr << ros_message->owner;
  }

  // Field name: positions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    size_t size = ros_message->positions.size;
    auto array_ptr = ros_message->positions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _SpawnUnits_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpawnUnits_Request__ros_msg_type * ros_message = static_cast<_SpawnUnits_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: unit_type
  {
    cdr >> ros_message->unit_type;
  }

  // Field name: owner
  {
    cdr >> ros_message->owner;
  }

  // Field name: positions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->positions.data) {
      geometry_msgs__msg__Point__Sequence__fini(&ros_message->positions);
    }
    if (!geometry_msgs__msg__Point__Sequence__init(&ros_message->positions, size)) {
      fprintf(stderr, "failed to create array for field 'positions'");
      return false;
    }
    auto array_ptr = ros_message->positions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sc2_bridge_interfaces
size_t get_serialized_size_sc2_bridge_interfaces__srv__SpawnUnits_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpawnUnits_Request__ros_msg_type * ros_message = static_cast<const _SpawnUnits_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name unit_type
  {
    size_t item_size = sizeof(ros_message->unit_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name owner
  {
    size_t item_size = sizeof(ros_message->owner);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name positions
  {
    size_t array_size = ros_message->positions.size;
    auto array_ptr = ros_message->positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpawnUnits_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sc2_bridge_interfaces__srv__SpawnUnits_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sc2_bridge_interfaces
size_t max_serialized_size_sc2_bridge_interfaces__srv__SpawnUnits_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: unit_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: owner
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: positions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sc2_bridge_interfaces__srv__SpawnUnits_Request;
    is_plain =
      (
      offsetof(DataType, positions) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SpawnUnits_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sc2_bridge_interfaces__srv__SpawnUnits_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SpawnUnits_Request = {
  "sc2_bridge_interfaces::srv",
  "SpawnUnits_Request",
  _SpawnUnits_Request__cdr_serialize,
  _SpawnUnits_Request__cdr_deserialize,
  _SpawnUnits_Request__get_serialized_size,
  _SpawnUnits_Request__max_serialized_size
};

static rosidl_message_type_support_t _SpawnUnits_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpawnUnits_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, srv, SpawnUnits_Request)() {
  return &_SpawnUnits_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "sc2_bridge_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "sc2_bridge_interfaces/srv/detail/spawn_units__struct.h"
// already included above
// #include "sc2_bridge_interfaces/srv/detail/spawn_units__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // tags
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // tags
#include "rosidl_runtime_c/string.h"  // aliases, message
#include "rosidl_runtime_c/string_functions.h"  // aliases, message

// forward declare type support functions


using _SpawnUnits_Response__ros_msg_type = sc2_bridge_interfaces__srv__SpawnUnits_Response;

static bool _SpawnUnits_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpawnUnits_Response__ros_msg_type * ros_message = static_cast<const _SpawnUnits_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: aliases
  {
    size_t size = ros_message->aliases.size;
    auto array_ptr = ros_message->aliases.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: tags
  {
    size_t size = ros_message->tags.size;
    auto array_ptr = ros_message->tags.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SpawnUnits_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpawnUnits_Response__ros_msg_type * ros_message = static_cast<_SpawnUnits_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: aliases
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->aliases.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->aliases);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->aliases, size)) {
      fprintf(stderr, "failed to create array for field 'aliases'");
      return false;
    }
    auto array_ptr = ros_message->aliases.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'aliases'\n");
        return false;
      }
    }
  }

  // Field name: tags
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->tags.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->tags);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->tags, size)) {
      fprintf(stderr, "failed to create array for field 'tags'");
      return false;
    }
    auto array_ptr = ros_message->tags.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sc2_bridge_interfaces
size_t get_serialized_size_sc2_bridge_interfaces__srv__SpawnUnits_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpawnUnits_Response__ros_msg_type * ros_message = static_cast<const _SpawnUnits_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name aliases
  {
    size_t array_size = ros_message->aliases.size;
    auto array_ptr = ros_message->aliases.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name tags
  {
    size_t array_size = ros_message->tags.size;
    auto array_ptr = ros_message->tags.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SpawnUnits_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sc2_bridge_interfaces__srv__SpawnUnits_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sc2_bridge_interfaces
size_t max_serialized_size_sc2_bridge_interfaces__srv__SpawnUnits_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: aliases
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: tags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sc2_bridge_interfaces__srv__SpawnUnits_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SpawnUnits_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sc2_bridge_interfaces__srv__SpawnUnits_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SpawnUnits_Response = {
  "sc2_bridge_interfaces::srv",
  "SpawnUnits_Response",
  _SpawnUnits_Response__cdr_serialize,
  _SpawnUnits_Response__cdr_deserialize,
  _SpawnUnits_Response__get_serialized_size,
  _SpawnUnits_Response__max_serialized_size
};

static rosidl_message_type_support_t _SpawnUnits_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpawnUnits_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, srv, SpawnUnits_Response)() {
  return &_SpawnUnits_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "sc2_bridge_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sc2_bridge_interfaces/srv/spawn_units.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SpawnUnits__callbacks = {
  "sc2_bridge_interfaces::srv",
  "SpawnUnits",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, srv, SpawnUnits_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, srv, SpawnUnits_Response)(),
};

static rosidl_service_type_support_t SpawnUnits__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SpawnUnits__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, srv, SpawnUnits)() {
  return &SpawnUnits__handle;
}

#if defined(__cplusplus)
}
#endif
