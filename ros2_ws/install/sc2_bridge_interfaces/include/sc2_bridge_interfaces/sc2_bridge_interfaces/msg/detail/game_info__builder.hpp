// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sc2_bridge_interfaces:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__BUILDER_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sc2_bridge_interfaces/msg/detail/game_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sc2_bridge_interfaces
{

namespace msg
{

namespace builder
{

class Init_GameInfo_playable_max
{
public:
  explicit Init_GameInfo_playable_max(::sc2_bridge_interfaces::msg::GameInfo & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::msg::GameInfo playable_max(::sc2_bridge_interfaces::msg::GameInfo::_playable_max_type arg)
  {
    msg_.playable_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::GameInfo msg_;
};

class Init_GameInfo_playable_min
{
public:
  explicit Init_GameInfo_playable_min(::sc2_bridge_interfaces::msg::GameInfo & msg)
  : msg_(msg)
  {}
  Init_GameInfo_playable_max playable_min(::sc2_bridge_interfaces::msg::GameInfo::_playable_min_type arg)
  {
    msg_.playable_min = std::move(arg);
    return Init_GameInfo_playable_max(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::GameInfo msg_;
};

class Init_GameInfo_world_frame_id
{
public:
  explicit Init_GameInfo_world_frame_id(::sc2_bridge_interfaces::msg::GameInfo & msg)
  : msg_(msg)
  {}
  Init_GameInfo_playable_min world_frame_id(::sc2_bridge_interfaces::msg::GameInfo::_world_frame_id_type arg)
  {
    msg_.world_frame_id = std::move(arg);
    return Init_GameInfo_playable_min(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::GameInfo msg_;
};

class Init_GameInfo_realtime
{
public:
  explicit Init_GameInfo_realtime(::sc2_bridge_interfaces::msg::GameInfo & msg)
  : msg_(msg)
  {}
  Init_GameInfo_world_frame_id realtime(::sc2_bridge_interfaces::msg::GameInfo::_realtime_type arg)
  {
    msg_.realtime = std::move(arg);
    return Init_GameInfo_world_frame_id(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::GameInfo msg_;
};

class Init_GameInfo_game_version
{
public:
  explicit Init_GameInfo_game_version(::sc2_bridge_interfaces::msg::GameInfo & msg)
  : msg_(msg)
  {}
  Init_GameInfo_realtime game_version(::sc2_bridge_interfaces::msg::GameInfo::_game_version_type arg)
  {
    msg_.game_version = std::move(arg);
    return Init_GameInfo_realtime(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::GameInfo msg_;
};

class Init_GameInfo_map_name
{
public:
  explicit Init_GameInfo_map_name(::sc2_bridge_interfaces::msg::GameInfo & msg)
  : msg_(msg)
  {}
  Init_GameInfo_game_version map_name(::sc2_bridge_interfaces::msg::GameInfo::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_GameInfo_game_version(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::GameInfo msg_;
};

class Init_GameInfo_header
{
public:
  Init_GameInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameInfo_map_name header(::sc2_bridge_interfaces::msg::GameInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GameInfo_map_name(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::GameInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::msg::GameInfo>()
{
  return sc2_bridge_interfaces::msg::builder::Init_GameInfo_header();
}

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__BUILDER_HPP_
