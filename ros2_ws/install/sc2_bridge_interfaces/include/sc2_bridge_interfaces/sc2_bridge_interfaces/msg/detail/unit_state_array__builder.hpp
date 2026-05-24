// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sc2_bridge_interfaces:msg/UnitStateArray.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE_ARRAY__BUILDER_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sc2_bridge_interfaces/msg/detail/unit_state_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sc2_bridge_interfaces
{

namespace msg
{

namespace builder
{

class Init_UnitStateArray_units
{
public:
  explicit Init_UnitStateArray_units(::sc2_bridge_interfaces::msg::UnitStateArray & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::msg::UnitStateArray units(::sc2_bridge_interfaces::msg::UnitStateArray::_units_type arg)
  {
    msg_.units = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitStateArray msg_;
};

class Init_UnitStateArray_game_loop
{
public:
  explicit Init_UnitStateArray_game_loop(::sc2_bridge_interfaces::msg::UnitStateArray & msg)
  : msg_(msg)
  {}
  Init_UnitStateArray_units game_loop(::sc2_bridge_interfaces::msg::UnitStateArray::_game_loop_type arg)
  {
    msg_.game_loop = std::move(arg);
    return Init_UnitStateArray_units(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitStateArray msg_;
};

class Init_UnitStateArray_header
{
public:
  Init_UnitStateArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnitStateArray_game_loop header(::sc2_bridge_interfaces::msg::UnitStateArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UnitStateArray_game_loop(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitStateArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::msg::UnitStateArray>()
{
  return sc2_bridge_interfaces::msg::builder::Init_UnitStateArray_header();
}

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE_ARRAY__BUILDER_HPP_
