// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sc2_bridge_interfaces:srv/KillUnits.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__SRV__DETAIL__KILL_UNITS__STRUCT_HPP_
#define SC2_BRIDGE_INTERFACES__SRV__DETAIL__KILL_UNITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sc2_bridge_interfaces__srv__KillUnits_Request __attribute__((deprecated))
#else
# define DEPRECATED__sc2_bridge_interfaces__srv__KillUnits_Request __declspec(deprecated)
#endif

namespace sc2_bridge_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct KillUnits_Request_
{
  using Type = KillUnits_Request_<ContainerAllocator>;

  explicit KillUnits_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit KillUnits_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _aliases_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _aliases_type aliases;

  // setters for named parameter idiom
  Type & set__aliases(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->aliases = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sc2_bridge_interfaces__srv__KillUnits_Request
    std::shared_ptr<sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sc2_bridge_interfaces__srv__KillUnits_Request
    std::shared_ptr<sc2_bridge_interfaces::srv::KillUnits_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KillUnits_Request_ & other) const
  {
    if (this->aliases != other.aliases) {
      return false;
    }
    return true;
  }
  bool operator!=(const KillUnits_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KillUnits_Request_

// alias to use template instance with default allocator
using KillUnits_Request =
  sc2_bridge_interfaces::srv::KillUnits_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sc2_bridge_interfaces


#ifndef _WIN32
# define DEPRECATED__sc2_bridge_interfaces__srv__KillUnits_Response __attribute__((deprecated))
#else
# define DEPRECATED__sc2_bridge_interfaces__srv__KillUnits_Response __declspec(deprecated)
#endif

namespace sc2_bridge_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct KillUnits_Response_
{
  using Type = KillUnits_Response_<ContainerAllocator>;

  explicit KillUnits_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit KillUnits_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sc2_bridge_interfaces__srv__KillUnits_Response
    std::shared_ptr<sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sc2_bridge_interfaces__srv__KillUnits_Response
    std::shared_ptr<sc2_bridge_interfaces::srv::KillUnits_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KillUnits_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const KillUnits_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KillUnits_Response_

// alias to use template instance with default allocator
using KillUnits_Response =
  sc2_bridge_interfaces::srv::KillUnits_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sc2_bridge_interfaces

namespace sc2_bridge_interfaces
{

namespace srv
{

struct KillUnits
{
  using Request = sc2_bridge_interfaces::srv::KillUnits_Request;
  using Response = sc2_bridge_interfaces::srv::KillUnits_Response;
};

}  // namespace srv

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__SRV__DETAIL__KILL_UNITS__STRUCT_HPP_
