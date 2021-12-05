// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_

#include "message_info/msg/detail/robot_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_RobotCommand_finish
{
public:
  explicit Init_RobotCommand_finish(::message_info::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  ::message_info::msg::RobotCommand finish(::message_info::msg::RobotCommand::_finish_type arg)
  {
    msg_.finish = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::RobotCommand msg_;
};

class Init_RobotCommand_is_yellow
{
public:
  explicit Init_RobotCommand_is_yellow(::message_info::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_finish is_yellow(::message_info::msg::RobotCommand::_is_yellow_type arg)
  {
    msg_.is_yellow = std::move(arg);
    return Init_RobotCommand_finish(msg_);
  }

private:
  ::message_info::msg::RobotCommand msg_;
};

class Init_RobotCommand_dribble_power
{
public:
  explicit Init_RobotCommand_dribble_power(::message_info::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_is_yellow dribble_power(::message_info::msg::RobotCommand::_dribble_power_type arg)
  {
    msg_.dribble_power = std::move(arg);
    return Init_RobotCommand_is_yellow(msg_);
  }

private:
  ::message_info::msg::RobotCommand msg_;
};

class Init_RobotCommand_chip_enable
{
public:
  explicit Init_RobotCommand_chip_enable(::message_info::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_dribble_power chip_enable(::message_info::msg::RobotCommand::_chip_enable_type arg)
  {
    msg_.chip_enable = std::move(arg);
    return Init_RobotCommand_dribble_power(msg_);
  }

private:
  ::message_info::msg::RobotCommand msg_;
};

class Init_RobotCommand_kick_power
{
public:
  explicit Init_RobotCommand_kick_power(::message_info::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_chip_enable kick_power(::message_info::msg::RobotCommand::_kick_power_type arg)
  {
    msg_.kick_power = std::move(arg);
    return Init_RobotCommand_chip_enable(msg_);
  }

private:
  ::message_info::msg::RobotCommand msg_;
};

class Init_RobotCommand_vel_angular
{
public:
  explicit Init_RobotCommand_vel_angular(::message_info::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_kick_power vel_angular(::message_info::msg::RobotCommand::_vel_angular_type arg)
  {
    msg_.vel_angular = std::move(arg);
    return Init_RobotCommand_kick_power(msg_);
  }

private:
  ::message_info::msg::RobotCommand msg_;
};

class Init_RobotCommand_vel_sway
{
public:
  explicit Init_RobotCommand_vel_sway(::message_info::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_vel_angular vel_sway(::message_info::msg::RobotCommand::_vel_sway_type arg)
  {
    msg_.vel_sway = std::move(arg);
    return Init_RobotCommand_vel_angular(msg_);
  }

private:
  ::message_info::msg::RobotCommand msg_;
};

class Init_RobotCommand_vel_surge
{
public:
  explicit Init_RobotCommand_vel_surge(::message_info::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_vel_sway vel_surge(::message_info::msg::RobotCommand::_vel_surge_type arg)
  {
    msg_.vel_surge = std::move(arg);
    return Init_RobotCommand_vel_sway(msg_);
  }

private:
  ::message_info::msg::RobotCommand msg_;
};

class Init_RobotCommand_robot_id
{
public:
  Init_RobotCommand_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommand_vel_surge robot_id(::message_info::msg::RobotCommand::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotCommand_vel_surge(msg_);
  }

private:
  ::message_info::msg::RobotCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::RobotCommand>()
{
  return message_info::msg::builder::Init_RobotCommand_robot_id();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
