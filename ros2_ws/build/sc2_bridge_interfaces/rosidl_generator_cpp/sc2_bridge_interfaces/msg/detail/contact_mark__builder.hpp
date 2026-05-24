// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sc2_bridge_interfaces:msg/ContactMark.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__BUILDER_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sc2_bridge_interfaces/msg/detail/contact_mark__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sc2_bridge_interfaces
{

namespace msg
{

namespace builder
{

class Init_ContactMark_status
{
public:
  explicit Init_ContactMark_status(::sc2_bridge_interfaces::msg::ContactMark & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::msg::ContactMark status(::sc2_bridge_interfaces::msg::ContactMark::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::ContactMark msg_;
};

class Init_ContactMark_last_seen
{
public:
  explicit Init_ContactMark_last_seen(::sc2_bridge_interfaces::msg::ContactMark & msg)
  : msg_(msg)
  {}
  Init_ContactMark_status last_seen(::sc2_bridge_interfaces::msg::ContactMark::_last_seen_type arg)
  {
    msg_.last_seen = std::move(arg);
    return Init_ContactMark_status(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::ContactMark msg_;
};

class Init_ContactMark_first_seen
{
public:
  explicit Init_ContactMark_first_seen(::sc2_bridge_interfaces::msg::ContactMark & msg)
  : msg_(msg)
  {}
  Init_ContactMark_last_seen first_seen(::sc2_bridge_interfaces::msg::ContactMark::_first_seen_type arg)
  {
    msg_.first_seen = std::move(arg);
    return Init_ContactMark_last_seen(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::ContactMark msg_;
};

class Init_ContactMark_position
{
public:
  explicit Init_ContactMark_position(::sc2_bridge_interfaces::msg::ContactMark & msg)
  : msg_(msg)
  {}
  Init_ContactMark_first_seen position(::sc2_bridge_interfaces::msg::ContactMark::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ContactMark_first_seen(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::ContactMark msg_;
};

class Init_ContactMark_alliance
{
public:
  explicit Init_ContactMark_alliance(::sc2_bridge_interfaces::msg::ContactMark & msg)
  : msg_(msg)
  {}
  Init_ContactMark_position alliance(::sc2_bridge_interfaces::msg::ContactMark::_alliance_type arg)
  {
    msg_.alliance = std::move(arg);
    return Init_ContactMark_position(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::ContactMark msg_;
};

class Init_ContactMark_unit_type
{
public:
  explicit Init_ContactMark_unit_type(::sc2_bridge_interfaces::msg::ContactMark & msg)
  : msg_(msg)
  {}
  Init_ContactMark_alliance unit_type(::sc2_bridge_interfaces::msg::ContactMark::_unit_type_type arg)
  {
    msg_.unit_type = std::move(arg);
    return Init_ContactMark_alliance(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::ContactMark msg_;
};

class Init_ContactMark_tag
{
public:
  explicit Init_ContactMark_tag(::sc2_bridge_interfaces::msg::ContactMark & msg)
  : msg_(msg)
  {}
  Init_ContactMark_unit_type tag(::sc2_bridge_interfaces::msg::ContactMark::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return Init_ContactMark_unit_type(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::ContactMark msg_;
};

class Init_ContactMark_mark_id
{
public:
  Init_ContactMark_mark_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactMark_tag mark_id(::sc2_bridge_interfaces::msg::ContactMark::_mark_id_type arg)
  {
    msg_.mark_id = std::move(arg);
    return Init_ContactMark_tag(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::ContactMark msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::msg::ContactMark>()
{
  return sc2_bridge_interfaces::msg::builder::Init_ContactMark_mark_id();
}

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__BUILDER_HPP_
