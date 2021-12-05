// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/RobotCommands.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__BUILDER_HPP_

#include "message_info/msg/detail/robot_commands__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_RobotCommands_commands
{
public:
  explicit Init_RobotCommands_commands(::message_info::msg::RobotCommands & msg)
  : msg_(msg)
  {}
  ::message_info::msg::RobotCommands commands(::message_info::msg::RobotCommands::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::RobotCommands msg_;
};

class Init_RobotCommands_is_yellow
{
public:
  explicit Init_RobotCommands_is_yellow(::message_info::msg::RobotCommands & msg)
  : msg_(msg)
  {}
  Init_RobotCommands_commands is_yellow(::message_info::msg::RobotCommands::_is_yellow_type arg)
  {
    msg_.is_yellow = std::move(arg);
    return Init_RobotCommands_commands(msg_);
  }

private:
  ::message_info::msg::RobotCommands msg_;
};

class Init_RobotCommands_header
{
public:
  Init_RobotCommands_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommands_is_yellow header(::message_info::msg::RobotCommands::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotCommands_is_yellow(msg_);
  }

private:
  ::message_info::msg::RobotCommands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::RobotCommands>()
{
  return message_info::msg::builder::Init_RobotCommands_header();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__BUILDER_HPP_
