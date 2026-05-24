// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sc2_bridge_interfaces:action/Attack.idl
// generated code does not contain a copyright notice
#include "sc2_bridge_interfaces/action/detail/attack__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sc2_bridge_interfaces/action/detail/attack__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace sc2_bridge_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_serialize(
  const sc2_bridge_interfaces::action::Attack_Goal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_tag
  cdr << ros_message.target_tag;
  // Member: target_point
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.target_point,
    cdr);
  // Member: queue
  cdr << (ros_message.queue ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sc2_bridge_interfaces::action::Attack_Goal & ros_message)
{
  // Member: target_tag
  cdr >> ros_message.target_tag;

  // Member: target_point
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.target_point);

  // Member: queue
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.queue = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
get_serialized_size(
  const sc2_bridge_interfaces::action::Attack_Goal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_tag
  {
    size_t item_size = sizeof(ros_message.target_tag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_point

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.target_point, current_alignment);
  // Member: queue
  {
    size_t item_size = sizeof(ros_message.queue);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
max_serialized_size_Attack_Goal(
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


  // Member: target_tag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: target_point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: queue
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sc2_bridge_interfaces::action::Attack_Goal;
    is_plain =
      (
      offsetof(DataType, queue) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Attack_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Attack_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sc2_bridge_interfaces::action::Attack_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Attack_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Attack_Goal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Attack_Goal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Attack_Goal__callbacks = {
  "sc2_bridge_interfaces::action",
  "Attack_Goal",
  _Attack_Goal__cdr_serialize,
  _Attack_Goal__cdr_deserialize,
  _Attack_Goal__get_serialized_size,
  _Attack_Goal__max_serialized_size
};

static rosidl_message_type_support_t _Attack_Goal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attack_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sc2_bridge_interfaces::action::Attack_Goal>()
{
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_Goal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_Goal)() {
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_Goal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace sc2_bridge_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_serialize(
  const sc2_bridge_interfaces::action::Attack_Result & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sc2_bridge_interfaces::action::Attack_Result & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
get_serialized_size(
  const sc2_bridge_interfaces::action::Attack_Result & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
max_serialized_size_Attack_Result(
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


  // Member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
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
    using DataType = sc2_bridge_interfaces::action::Attack_Result;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Attack_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Attack_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sc2_bridge_interfaces::action::Attack_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Attack_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Attack_Result__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Attack_Result(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Attack_Result__callbacks = {
  "sc2_bridge_interfaces::action",
  "Attack_Result",
  _Attack_Result__cdr_serialize,
  _Attack_Result__cdr_deserialize,
  _Attack_Result__get_serialized_size,
  _Attack_Result__max_serialized_size
};

static rosidl_message_type_support_t _Attack_Result__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attack_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sc2_bridge_interfaces::action::Attack_Result>()
{
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_Result__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_Result)() {
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_Result__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace sc2_bridge_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_serialize(
  const sc2_bridge_interfaces::action::Attack_Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: distance_to_target
  cdr << ros_message.distance_to_target;
  // Member: engaged
  cdr << (ros_message.engaged ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sc2_bridge_interfaces::action::Attack_Feedback & ros_message)
{
  // Member: distance_to_target
  cdr >> ros_message.distance_to_target;

  // Member: engaged
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engaged = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
get_serialized_size(
  const sc2_bridge_interfaces::action::Attack_Feedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: distance_to_target
  {
    size_t item_size = sizeof(ros_message.distance_to_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engaged
  {
    size_t item_size = sizeof(ros_message.engaged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
max_serialized_size_Attack_Feedback(
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


  // Member: distance_to_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engaged
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sc2_bridge_interfaces::action::Attack_Feedback;
    is_plain =
      (
      offsetof(DataType, engaged) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Attack_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Attack_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sc2_bridge_interfaces::action::Attack_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Attack_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Attack_Feedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Attack_Feedback(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Attack_Feedback__callbacks = {
  "sc2_bridge_interfaces::action",
  "Attack_Feedback",
  _Attack_Feedback__cdr_serialize,
  _Attack_Feedback__cdr_deserialize,
  _Attack_Feedback__get_serialized_size,
  _Attack_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _Attack_Feedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attack_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sc2_bridge_interfaces::action::Attack_Feedback>()
{
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_Feedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_Feedback)() {
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_Feedback__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

// functions for sc2_bridge_interfaces::action::Attack_Goal already declared above


namespace sc2_bridge_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_serialize(
  const sc2_bridge_interfaces::action::Attack_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sc2_bridge_interfaces::action::Attack_SendGoal_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: goal
  sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
get_serialized_size(
  const sc2_bridge_interfaces::action::Attack_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: goal

  current_alignment +=
    sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
max_serialized_size_Attack_SendGoal_Request(
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


  // Member: goal_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: goal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::max_serialized_size_Attack_Goal(
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
    using DataType = sc2_bridge_interfaces::action::Attack_SendGoal_Request;
    is_plain =
      (
      offsetof(DataType, goal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Attack_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Attack_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sc2_bridge_interfaces::action::Attack_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Attack_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Attack_SendGoal_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Attack_SendGoal_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Attack_SendGoal_Request__callbacks = {
  "sc2_bridge_interfaces::action",
  "Attack_SendGoal_Request",
  _Attack_SendGoal_Request__cdr_serialize,
  _Attack_SendGoal_Request__cdr_deserialize,
  _Attack_SendGoal_Request__get_serialized_size,
  _Attack_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _Attack_SendGoal_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attack_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sc2_bridge_interfaces::action::Attack_SendGoal_Request>()
{
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_SendGoal_Request)() {
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_SendGoal_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace sc2_bridge_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_serialize(
  const sc2_bridge_interfaces::action::Attack_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accepted
  cdr << (ros_message.accepted ? true : false);
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sc2_bridge_interfaces::action::Attack_SendGoal_Response & ros_message)
{
  // Member: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepted = tmp ? true : false;
  }

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
get_serialized_size(
  const sc2_bridge_interfaces::action::Attack_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accepted
  {
    size_t item_size = sizeof(ros_message.accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
max_serialized_size_Attack_SendGoal_Response(
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


  // Member: accepted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
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
    using DataType = sc2_bridge_interfaces::action::Attack_SendGoal_Response;
    is_plain =
      (
      offsetof(DataType, stamp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Attack_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Attack_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sc2_bridge_interfaces::action::Attack_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Attack_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Attack_SendGoal_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Attack_SendGoal_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Attack_SendGoal_Response__callbacks = {
  "sc2_bridge_interfaces::action",
  "Attack_SendGoal_Response",
  _Attack_SendGoal_Response__cdr_serialize,
  _Attack_SendGoal_Response__cdr_deserialize,
  _Attack_SendGoal_Response__get_serialized_size,
  _Attack_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _Attack_SendGoal_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attack_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sc2_bridge_interfaces::action::Attack_SendGoal_Response>()
{
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_SendGoal_Response)() {
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_SendGoal_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Attack_SendGoal__callbacks = {
  "sc2_bridge_interfaces::action",
  "Attack_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_SendGoal_Response)(),
};

static rosidl_service_type_support_t _Attack_SendGoal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attack_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<sc2_bridge_interfaces::action::Attack_SendGoal>()
{
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_SendGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_SendGoal)() {
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_SendGoal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
// functions for unique_identifier_msgs::msg::UUID already declared above


namespace sc2_bridge_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_serialize(
  const sc2_bridge_interfaces::action::Attack_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sc2_bridge_interfaces::action::Attack_GetResult_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
get_serialized_size(
  const sc2_bridge_interfaces::action::Attack_GetResult_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
max_serialized_size_Attack_GetResult_Request(
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


  // Member: goal_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
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
    using DataType = sc2_bridge_interfaces::action::Attack_GetResult_Request;
    is_plain =
      (
      offsetof(DataType, goal_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Attack_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Attack_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sc2_bridge_interfaces::action::Attack_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Attack_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Attack_GetResult_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Attack_GetResult_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Attack_GetResult_Request__callbacks = {
  "sc2_bridge_interfaces::action",
  "Attack_GetResult_Request",
  _Attack_GetResult_Request__cdr_serialize,
  _Attack_GetResult_Request__cdr_deserialize,
  _Attack_GetResult_Request__get_serialized_size,
  _Attack_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _Attack_GetResult_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attack_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sc2_bridge_interfaces::action::Attack_GetResult_Request>()
{
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_GetResult_Request)() {
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_GetResult_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
// functions for sc2_bridge_interfaces::action::Attack_Result already declared above


namespace sc2_bridge_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_serialize(
  const sc2_bridge_interfaces::action::Attack_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  // Member: result
  sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sc2_bridge_interfaces::action::Attack_GetResult_Response & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  // Member: result
  sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
get_serialized_size(
  const sc2_bridge_interfaces::action::Attack_GetResult_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: result

  current_alignment +=
    sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
max_serialized_size_Attack_GetResult_Response(
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


  // Member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::max_serialized_size_Attack_Result(
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
    using DataType = sc2_bridge_interfaces::action::Attack_GetResult_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Attack_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Attack_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sc2_bridge_interfaces::action::Attack_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Attack_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Attack_GetResult_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Attack_GetResult_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Attack_GetResult_Response__callbacks = {
  "sc2_bridge_interfaces::action",
  "Attack_GetResult_Response",
  _Attack_GetResult_Response__cdr_serialize,
  _Attack_GetResult_Response__cdr_deserialize,
  _Attack_GetResult_Response__get_serialized_size,
  _Attack_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _Attack_GetResult_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attack_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sc2_bridge_interfaces::action::Attack_GetResult_Response>()
{
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_GetResult_Response)() {
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Attack_GetResult__callbacks = {
  "sc2_bridge_interfaces::action",
  "Attack_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_GetResult_Response)(),
};

static rosidl_service_type_support_t _Attack_GetResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attack_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<sc2_bridge_interfaces::action::Attack_GetResult>()
{
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_GetResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_GetResult)() {
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_GetResult__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
// functions for unique_identifier_msgs::msg::UUID already declared above

// functions for sc2_bridge_interfaces::action::Attack_Feedback already declared above


namespace sc2_bridge_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_serialize(
  const sc2_bridge_interfaces::action::Attack_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sc2_bridge_interfaces::action::Attack_FeedbackMessage & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: feedback
  sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.feedback);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
get_serialized_size(
  const sc2_bridge_interfaces::action::Attack_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: feedback

  current_alignment +=
    sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.feedback, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
max_serialized_size_Attack_FeedbackMessage(
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


  // Member: goal_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: feedback
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::max_serialized_size_Attack_Feedback(
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
    using DataType = sc2_bridge_interfaces::action::Attack_FeedbackMessage;
    is_plain =
      (
      offsetof(DataType, feedback) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Attack_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Attack_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sc2_bridge_interfaces::action::Attack_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Attack_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::action::Attack_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Attack_FeedbackMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Attack_FeedbackMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Attack_FeedbackMessage__callbacks = {
  "sc2_bridge_interfaces::action",
  "Attack_FeedbackMessage",
  _Attack_FeedbackMessage__cdr_serialize,
  _Attack_FeedbackMessage__cdr_deserialize,
  _Attack_FeedbackMessage__get_serialized_size,
  _Attack_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _Attack_FeedbackMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Attack_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sc2_bridge_interfaces::action::Attack_FeedbackMessage>()
{
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, action, Attack_FeedbackMessage)() {
  return &sc2_bridge_interfaces::action::typesupport_fastrtps_cpp::_Attack_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
