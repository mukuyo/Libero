// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message_info:msg/Slave.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "message_info/msg/detail/slave__struct.h"
#include "message_info/msg/detail/slave__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool message_info__msg__slave__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("message_info.msg._slave.Slave", full_classname_dest, 29) == 0);
  }
  message_info__msg__Slave * ros_message = _ros_message;
  {  // imu_degree
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_degree");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_degree = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // appear
    PyObject * field = PyObject_GetAttrString(_pymsg, "appear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->appear = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // camera_degree
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_degree");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->camera_degree = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // lidar_degree
    PyObject * field = PyObject_GetAttrString(_pymsg, "lidar_degree");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lidar_degree = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // find
    PyObject * field = PyObject_GetAttrString(_pymsg, "find");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->find = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // touch
    PyObject * field = PyObject_GetAttrString(_pymsg, "touch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->touch = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // left
    PyObject * field = PyObject_GetAttrString(_pymsg, "left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right
    PyObject * field = PyObject_GetAttrString(_pymsg, "right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // decide
    PyObject * field = PyObject_GetAttrString(_pymsg, "decide");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->decide = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imu = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message_info__msg__slave__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Slave */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message_info.msg._slave");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Slave");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message_info__msg__Slave * ros_message = (message_info__msg__Slave *)raw_ros_message;
  {  // imu_degree
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_degree);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_degree", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // appear
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->appear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "appear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_degree
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->camera_degree);
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_degree", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lidar_degree
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lidar_degree);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lidar_degree", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // find
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->find);
    {
      int rc = PyObject_SetAttrString(_pymessage, "find", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // touch
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->touch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "touch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // decide
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->decide);
    {
      int rc = PyObject_SetAttrString(_pymessage, "decide", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->imu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
