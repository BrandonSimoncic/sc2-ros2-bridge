// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sc2_bridge_interfaces:msg/UnitStateArray.idl
// generated code does not contain a copyright notice
#include "sc2_bridge_interfaces/msg/detail/unit_state_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sc2_bridge_interfaces/msg/detail/unit_state_array__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace sc2_bridge_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sc2_bridge_interfaces::msg::UnitState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sc2_bridge_interfaces::msg::UnitState &);
size_t get_serialized_size(
  const sc2_bridge_interfaces::msg::UnitState &,
  size_t current_alignment);
size_t
max_serialized_size_UnitState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sc2_bridge_interfaces


namespace sc2_bridge_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_serialize(
  const sc2_bridge_interfaces::msg::UnitStateArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: game_loop
  cdr << ros_message.game_loop;
  // Member: units
  {
    size_t size = ros_message.units.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      sc2_bridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.units[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sc2_bridge_interfaces::msg::UnitStateArray & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: game_loop
  cdr >> ros_message.game_loop;

  // Member: units
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

    ros_message.units.resize(size);
    for (size_t i = 0; i < size; i++) {
      sc2_bridge_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.units[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
get_serialized_size(
  const sc2_bridge_interfaces::msg::UnitStateArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: game_loop
  {
    size_t item_size = sizeof(ros_message.game_loop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: units
  {
    size_t array_size = ros_message.units.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sc2_bridge_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.units[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc2_bridge_interfaces
max_serialized_size_UnitStateArray(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: game_loop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: units
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
      size_t inner_size =
        sc2_bridge_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_UnitState(
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
    using DataType = sc2_bridge_interfaces::msg::UnitStateArray;
    is_plain =
      (
      offsetof(DataType, units) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _UnitStateArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::msg::UnitStateArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UnitStateArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sc2_bridge_interfaces::msg::UnitStateArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UnitStateArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sc2_bridge_interfaces::msg::UnitStateArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UnitStateArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UnitStateArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UnitStateArray__callbacks = {
  "sc2_bridge_interfaces::msg",
  "UnitStateArray",
  _UnitStateArray__cdr_serialize,
  _UnitStateArray__cdr_deserialize,
  _UnitStateArray__get_serialized_size,
  _UnitStateArray__max_serialized_size
};

static rosidl_message_type_support_t _UnitStateArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UnitStateArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sc2_bridge_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc2_bridge_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sc2_bridge_interfaces::msg::UnitStateArray>()
{
  return &sc2_bridge_interfaces::msg::typesupport_fastrtps_cpp::_UnitStateArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc2_bridge_interfaces, msg, UnitStateArray)() {
  return &sc2_bridge_interfaces::msg::typesupport_fastrtps_cpp::_UnitStateArray__handle;
}

#ifdef __cplusplus
}
#endif
