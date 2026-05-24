// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sc2_bridge_interfaces:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__STRUCT_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'playable_min'
// Member 'playable_max'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sc2_bridge_interfaces__msg__GameInfo __attribute__((deprecated))
#else
# define DEPRECATED__sc2_bridge_interfaces__msg__GameInfo __declspec(deprecated)
#endif

namespace sc2_bridge_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameInfo_
{
  using Type = GameInfo_<ContainerAllocator>;

  explicit GameInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    playable_min(_init),
    playable_max(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->game_version = "";
      this->realtime = false;
      this->world_frame_id = "";
    }
  }

  explicit GameInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    map_name(_alloc),
    game_version(_alloc),
    world_frame_id(_alloc),
    playable_min(_alloc, _init),
    playable_max(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->game_version = "";
      this->realtime = false;
      this->world_frame_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _game_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _game_version_type game_version;
  using _realtime_type =
    bool;
  _realtime_type realtime;
  using _world_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _world_frame_id_type world_frame_id;
  using _playable_min_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _playable_min_type playable_min;
  using _playable_max_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _playable_max_type playable_max;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__game_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->game_version = _arg;
    return *this;
  }
  Type & set__realtime(
    const bool & _arg)
  {
    this->realtime = _arg;
    return *this;
  }
  Type & set__world_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->world_frame_id = _arg;
    return *this;
  }
  Type & set__playable_min(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->playable_min = _arg;
    return *this;
  }
  Type & set__playable_max(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->playable_max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sc2_bridge_interfaces__msg__GameInfo
    std::shared_ptr<sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sc2_bridge_interfaces__msg__GameInfo
    std::shared_ptr<sc2_bridge_interfaces::msg::GameInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->game_version != other.game_version) {
      return false;
    }
    if (this->realtime != other.realtime) {
      return false;
    }
    if (this->world_frame_id != other.world_frame_id) {
      return false;
    }
    if (this->playable_min != other.playable_min) {
      return false;
    }
    if (this->playable_max != other.playable_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameInfo_

// alias to use template instance with default allocator
using GameInfo =
  sc2_bridge_interfaces::msg::GameInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__STRUCT_HPP_
