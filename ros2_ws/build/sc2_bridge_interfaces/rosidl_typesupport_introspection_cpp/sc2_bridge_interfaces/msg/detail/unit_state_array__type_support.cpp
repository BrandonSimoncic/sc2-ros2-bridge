// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sc2_bridge_interfaces:msg/UnitStateArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sc2_bridge_interfaces/msg/detail/unit_state_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sc2_bridge_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void UnitStateArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sc2_bridge_interfaces::msg::UnitStateArray(_init);
}

void UnitStateArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sc2_bridge_interfaces::msg::UnitStateArray *>(message_memory);
  typed_message->~UnitStateArray();
}

size_t size_function__UnitStateArray__units(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sc2_bridge_interfaces::msg::UnitState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UnitStateArray__units(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sc2_bridge_interfaces::msg::UnitState> *>(untyped_member);
  return &member[index];
}

void * get_function__UnitStateArray__units(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sc2_bridge_interfaces::msg::UnitState> *>(untyped_member);
  return &member[index];
}

void fetch_function__UnitStateArray__units(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sc2_bridge_interfaces::msg::UnitState *>(
    get_const_function__UnitStateArray__units(untyped_member, index));
  auto & value = *reinterpret_cast<sc2_bridge_interfaces::msg::UnitState *>(untyped_value);
  value = item;
}

void assign_function__UnitStateArray__units(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sc2_bridge_interfaces::msg::UnitState *>(
    get_function__UnitStateArray__units(untyped_member, index));
  const auto & value = *reinterpret_cast<const sc2_bridge_interfaces::msg::UnitState *>(untyped_value);
  item = value;
}

void resize_function__UnitStateArray__units(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sc2_bridge_interfaces::msg::UnitState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UnitStateArray_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces::msg::UnitStateArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "game_loop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces::msg::UnitStateArray, game_loop),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "units",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sc2_bridge_interfaces::msg::UnitState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sc2_bridge_interfaces::msg::UnitStateArray, units),  // bytes offset in struct
    nullptr,  // default value
    size_function__UnitStateArray__units,  // size() function pointer
    get_const_function__UnitStateArray__units,  // get_const(index) function pointer
    get_function__UnitStateArray__units,  // get(index) function pointer
    fetch_function__UnitStateArray__units,  // fetch(index, &value) function pointer
    assign_function__UnitStateArray__units,  // assign(index, value) function pointer
    resize_function__UnitStateArray__units  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UnitStateArray_message_members = {
  "sc2_bridge_interfaces::msg",  // message namespace
  "UnitStateArray",  // message name
  3,  // number of fields
  sizeof(sc2_bridge_interfaces::msg::UnitStateArray),
  UnitStateArray_message_member_array,  // message members
  UnitStateArray_init_function,  // function to initialize message memory (memory has to be allocated)
  UnitStateArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UnitStateArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UnitStateArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sc2_bridge_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sc2_bridge_interfaces::msg::UnitStateArray>()
{
  return &::sc2_bridge_interfaces::msg::rosidl_typesupport_introspection_cpp::UnitStateArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sc2_bridge_interfaces, msg, UnitStateArray)() {
  return &::sc2_bridge_interfaces::msg::rosidl_typesupport_introspection_cpp::UnitStateArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
