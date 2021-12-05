// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/RobotCommands.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'commands'
#include "message_info/msg/detail/robot_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__message_info__msg__RobotCommands __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__RobotCommands __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCommands_
{
  using Type = RobotCommands_<ContainerAllocator>;

  explicit RobotCommands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_yellow = false;
      this->commands.fill(message_info::msg::RobotCommand_<ContainerAllocator>{_init});
    }
  }

  explicit RobotCommands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    commands(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_yellow = false;
      this->commands.fill(message_info::msg::RobotCommand_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _is_yellow_type =
    bool;
  _is_yellow_type is_yellow;
  using _commands_type =
    std::array<message_info::msg::RobotCommand_<ContainerAllocator>, 16>;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__is_yellow(
    const bool & _arg)
  {
    this->is_yellow = _arg;
    return *this;
  }
  Type & set__commands(
    const std::array<message_info::msg::RobotCommand_<ContainerAllocator>, 16> & _arg)
  {
    this->commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::RobotCommands_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::RobotCommands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::RobotCommands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::RobotCommands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::RobotCommands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::RobotCommands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::RobotCommands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::RobotCommands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::RobotCommands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::RobotCommands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__RobotCommands
    std::shared_ptr<message_info::msg::RobotCommands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__RobotCommands
    std::shared_ptr<message_info::msg::RobotCommands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommands_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->is_yellow != other.is_yellow) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommands_

// alias to use template instance with default allocator
using RobotCommands =
  message_info::msg::RobotCommands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__STRUCT_HPP_
