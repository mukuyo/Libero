// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RobotCommand in the package message_info.
typedef struct message_info__msg__RobotCommand
{
  int64_t robot_id;
  double vel_surge;
  double vel_sway;
  double vel_angular;
  double kick_power;
  bool chip_enable;
  double dribble_power;
  bool is_yellow;
  bool finish;
} message_info__msg__RobotCommand;

// Struct for a sequence of message_info__msg__RobotCommand.
typedef struct message_info__msg__RobotCommand__Sequence
{
  message_info__msg__RobotCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__RobotCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_
