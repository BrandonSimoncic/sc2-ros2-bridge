// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sc2_bridge_interfaces:msg/ContactMarkArray.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK_ARRAY__BUILDER_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sc2_bridge_interfaces/msg/detail/contact_mark_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sc2_bridge_interfaces
{

namespace msg
{

namespace builder
{

class Init_ContactMarkArray_marks
{
public:
  explicit Init_ContactMarkArray_marks(::sc2_bridge_interfaces::msg::ContactMarkArray & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::msg::ContactMarkArray marks(::sc2_bridge_interfaces::msg::ContactMarkArray::_marks_type arg)
  {
    msg_.marks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::ContactMarkArray msg_;
};

class Init_ContactMarkArray_header
{
public:
  Init_ContactMarkArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactMarkArray_marks header(::sc2_bridge_interfaces::msg::ContactMarkArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ContactMarkArray_marks(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::ContactMarkArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::msg::ContactMarkArray>()
{
  return sc2_bridge_interfaces::msg::builder::Init_ContactMarkArray_header();
}

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK_ARRAY__BUILDER_HPP_
