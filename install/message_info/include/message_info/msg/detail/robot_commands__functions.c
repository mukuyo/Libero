// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/RobotCommands.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/robot_commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `commands`
#include "message_info/msg/detail/robot_command__functions.h"

bool
message_info__msg__RobotCommands__init(message_info__msg__RobotCommands * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    message_info__msg__RobotCommands__fini(msg);
    return false;
  }
  // is_yellow
  // commands
  for (size_t i = 0; i < 16; ++i) {
    if (!message_info__msg__RobotCommand__init(&msg->commands[i])) {
      message_info__msg__RobotCommands__fini(msg);
      return false;
    }
  }
  return true;
}

void
message_info__msg__RobotCommands__fini(message_info__msg__RobotCommands * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // is_yellow
  // commands
  for (size_t i = 0; i < 16; ++i) {
    message_info__msg__RobotCommand__fini(&msg->commands[i]);
  }
}

message_info__msg__RobotCommands *
message_info__msg__RobotCommands__create()
{
  message_info__msg__RobotCommands * msg = (message_info__msg__RobotCommands *)malloc(sizeof(message_info__msg__RobotCommands));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__RobotCommands));
  bool success = message_info__msg__RobotCommands__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__RobotCommands__destroy(message_info__msg__RobotCommands * msg)
{
  if (msg) {
    message_info__msg__RobotCommands__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__RobotCommands__Sequence__init(message_info__msg__RobotCommands__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__RobotCommands * data = NULL;
  if (size) {
    data = (message_info__msg__RobotCommands *)calloc(size, sizeof(message_info__msg__RobotCommands));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__RobotCommands__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__RobotCommands__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
message_info__msg__RobotCommands__Sequence__fini(message_info__msg__RobotCommands__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__RobotCommands__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

message_info__msg__RobotCommands__Sequence *
message_info__msg__RobotCommands__Sequence__create(size_t size)
{
  message_info__msg__RobotCommands__Sequence * array = (message_info__msg__RobotCommands__Sequence *)malloc(sizeof(message_info__msg__RobotCommands__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__RobotCommands__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__RobotCommands__Sequence__destroy(message_info__msg__RobotCommands__Sequence * array)
{
  if (array) {
    message_info__msg__RobotCommands__Sequence__fini(array);
  }
  free(array);
}
