// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/RealCommands.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/real_commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
message_info__msg__RealCommands__init(message_info__msg__RealCommands * msg)
{
  if (!msg) {
    return false;
  }
  // ball_catch
  // degree_ball_robot
  return true;
}

void
message_info__msg__RealCommands__fini(message_info__msg__RealCommands * msg)
{
  if (!msg) {
    return;
  }
  // ball_catch
  // degree_ball_robot
}

message_info__msg__RealCommands *
message_info__msg__RealCommands__create()
{
  message_info__msg__RealCommands * msg = (message_info__msg__RealCommands *)malloc(sizeof(message_info__msg__RealCommands));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__RealCommands));
  bool success = message_info__msg__RealCommands__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__RealCommands__destroy(message_info__msg__RealCommands * msg)
{
  if (msg) {
    message_info__msg__RealCommands__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__RealCommands__Sequence__init(message_info__msg__RealCommands__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__RealCommands * data = NULL;
  if (size) {
    data = (message_info__msg__RealCommands *)calloc(size, sizeof(message_info__msg__RealCommands));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__RealCommands__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__RealCommands__fini(&data[i - 1]);
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
message_info__msg__RealCommands__Sequence__fini(message_info__msg__RealCommands__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__RealCommands__fini(&array->data[i]);
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

message_info__msg__RealCommands__Sequence *
message_info__msg__RealCommands__Sequence__create(size_t size)
{
  message_info__msg__RealCommands__Sequence * array = (message_info__msg__RealCommands__Sequence *)malloc(sizeof(message_info__msg__RealCommands__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__RealCommands__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__RealCommands__Sequence__destroy(message_info__msg__RealCommands__Sequence * array)
{
  if (array) {
    message_info__msg__RealCommands__Sequence__fini(array);
  }
  free(array);
}
