// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sc2_bridge_interfaces:action/Attack.idl
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
#include "sc2_bridge_interfaces/action/detail/attack__struct.h"
#include "sc2_bridge_interfaces/action/detail/attack__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sc2_bridge_interfaces__action__attack__goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("sc2_bridge_interfaces.action._attack.Attack_Goal", full_classname_dest, 48) == 0);
  }
  sc2_bridge_interfaces__action__Attack_Goal * ros_message = _ros_message;
  {  // target_tag
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_tag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_tag = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // target_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_point");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->target_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // queue
    PyObject * field = PyObject_GetAttrString(_pymsg, "queue");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->queue = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc2_bridge_interfaces__action__attack__goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Attack_Goal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc2_bridge_interfaces.action._attack");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Attack_Goal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc2_bridge_interfaces__action__Attack_Goal * ros_message = (sc2_bridge_interfaces__action__Attack_Goal *)raw_ros_message;
  {  // target_tag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->target_tag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_tag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_point
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->target_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // queue
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->queue ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "queue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sc2_bridge_interfaces__action__attack__result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("sc2_bridge_interfaces.action._attack.Attack_Result", full_classname_dest, 50) == 0);
  }
  sc2_bridge_interfaces__action__Attack_Result * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc2_bridge_interfaces__action__attack__result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Attack_Result */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc2_bridge_interfaces.action._attack");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Attack_Result");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc2_bridge_interfaces__action__Attack_Result * ros_message = (sc2_bridge_interfaces__action__Attack_Result *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sc2_bridge_interfaces__action__attack__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("sc2_bridge_interfaces.action._attack.Attack_Feedback", full_classname_dest, 52) == 0);
  }
  sc2_bridge_interfaces__action__Attack_Feedback * ros_message = _ros_message;
  {  // distance_to_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engaged
    PyObject * field = PyObject_GetAttrString(_pymsg, "engaged");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->engaged = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc2_bridge_interfaces__action__attack__feedback__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Attack_Feedback */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc2_bridge_interfaces.action._attack");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Attack_Feedback");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc2_bridge_interfaces__action__Attack_Feedback * ros_message = (sc2_bridge_interfaces__action__Attack_Feedback *)raw_ros_message;
  {  // distance_to_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engaged
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->engaged ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engaged", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool sc2_bridge_interfaces__action__attack__goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sc2_bridge_interfaces__action__attack__goal__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sc2_bridge_interfaces__action__attack__send_goal__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("sc2_bridge_interfaces.action._attack.Attack_SendGoal_Request", full_classname_dest, 60) == 0);
  }
  sc2_bridge_interfaces__action__Attack_SendGoal_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal");
    if (!field) {
      return false;
    }
    if (!sc2_bridge_interfaces__action__attack__goal__convert_from_py(field, &ros_message->goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc2_bridge_interfaces__action__attack__send_goal__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Attack_SendGoal_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc2_bridge_interfaces.action._attack");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Attack_SendGoal_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc2_bridge_interfaces__action__Attack_SendGoal_Request * ros_message = (sc2_bridge_interfaces__action__Attack_SendGoal_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal
    PyObject * field = NULL;
    field = sc2_bridge_interfaces__action__attack__goal__convert_to_py(&ros_message->goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sc2_bridge_interfaces__action__attack__send_goal__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("sc2_bridge_interfaces.action._attack.Attack_SendGoal_Response", full_classname_dest, 61) == 0);
  }
  sc2_bridge_interfaces__action__Attack_SendGoal_Response * ros_message = _ros_message;
  {  // accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc2_bridge_interfaces__action__attack__send_goal__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Attack_SendGoal_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc2_bridge_interfaces.action._attack");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Attack_SendGoal_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc2_bridge_interfaces__action__Attack_SendGoal_Response * ros_message = (sc2_bridge_interfaces__action__Attack_SendGoal_Response *)raw_ros_message;
  {  // accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sc2_bridge_interfaces__action__attack__get_result__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("sc2_bridge_interfaces.action._attack.Attack_GetResult_Request", full_classname_dest, 61) == 0);
  }
  sc2_bridge_interfaces__action__Attack_GetResult_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc2_bridge_interfaces__action__attack__get_result__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Attack_GetResult_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc2_bridge_interfaces.action._attack");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Attack_GetResult_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc2_bridge_interfaces__action__Attack_GetResult_Request * ros_message = (sc2_bridge_interfaces__action__Attack_GetResult_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__functions.h"

bool sc2_bridge_interfaces__action__attack__result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sc2_bridge_interfaces__action__attack__result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sc2_bridge_interfaces__action__attack__get_result__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("sc2_bridge_interfaces.action._attack.Attack_GetResult_Response", full_classname_dest, 62) == 0);
  }
  sc2_bridge_interfaces__action__Attack_GetResult_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!sc2_bridge_interfaces__action__attack__result__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc2_bridge_interfaces__action__attack__get_result__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Attack_GetResult_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc2_bridge_interfaces.action._attack");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Attack_GetResult_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc2_bridge_interfaces__action__Attack_GetResult_Response * ros_message = (sc2_bridge_interfaces__action__Attack_GetResult_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = sc2_bridge_interfaces__action__attack__result__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool sc2_bridge_interfaces__action__attack__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sc2_bridge_interfaces__action__attack__feedback__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sc2_bridge_interfaces__action__attack__feedback_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("sc2_bridge_interfaces.action._attack.Attack_FeedbackMessage", full_classname_dest, 59) == 0);
  }
  sc2_bridge_interfaces__action__Attack_FeedbackMessage * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback");
    if (!field) {
      return false;
    }
    if (!sc2_bridge_interfaces__action__attack__feedback__convert_from_py(field, &ros_message->feedback)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc2_bridge_interfaces__action__attack__feedback_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Attack_FeedbackMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc2_bridge_interfaces.action._attack");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Attack_FeedbackMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc2_bridge_interfaces__action__Attack_FeedbackMessage * ros_message = (sc2_bridge_interfaces__action__Attack_FeedbackMessage *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback
    PyObject * field = NULL;
    field = sc2_bridge_interfaces__action__attack__feedback__convert_to_py(&ros_message->feedback);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
