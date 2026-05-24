// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sc2_bridge_interfaces:msg/UnitState.idl
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
#include "sc2_bridge_interfaces/msg/detail/unit_state__struct.h"
#include "sc2_bridge_interfaces/msg/detail/unit_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sc2_bridge_interfaces__msg__unit_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("sc2_bridge_interfaces.msg._unit_state.UnitState", full_classname_dest, 47) == 0);
  }
  sc2_bridge_interfaces__msg__UnitState * ros_message = _ros_message;
  {  // tag
    PyObject * field = PyObject_GetAttrString(_pymsg, "tag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tag = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // alias
    PyObject * field = PyObject_GetAttrString(_pymsg, "alias");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->alias, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // unit_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "unit_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unit_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // owner
    PyObject * field = PyObject_GetAttrString(_pymsg, "owner");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->owner = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // alliance
    PyObject * field = PyObject_GetAttrString(_pymsg, "alliance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alliance = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // display_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "display_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->display_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // facing
    PyObject * field = PyObject_GetAttrString(_pymsg, "facing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->facing = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // health
    PyObject * field = PyObject_GetAttrString(_pymsg, "health");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->health = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // health_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "health_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->health_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // energy
    PyObject * field = PyObject_GetAttrString(_pymsg, "energy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->energy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // energy_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "energy_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->energy_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_alive
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_alive");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_alive = (Py_True == field);
    Py_DECREF(field);
  }
  {  // order_ability_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "order_ability_ids");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint32_t);
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->order_ability_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->order_ability_ids.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'order_ability_ids'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->order_ability_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->order_ability_ids.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint32_t tmp = PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc2_bridge_interfaces__msg__unit_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UnitState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc2_bridge_interfaces.msg._unit_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UnitState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc2_bridge_interfaces__msg__UnitState * ros_message = (sc2_bridge_interfaces__msg__UnitState *)raw_ros_message;
  {  // tag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->tag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alias
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->alias.data,
      strlen(ros_message->alias.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "alias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unit_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->unit_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unit_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // owner
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->owner);
    {
      int rc = PyObject_SetAttrString(_pymessage, "owner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alliance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alliance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alliance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // display_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->display_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "display_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // facing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->facing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "facing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->health);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->health_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // energy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->energy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // energy_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->energy_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energy_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_alive
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_alive ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_alive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // order_ability_ids
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "order_ability_ids");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->order_ability_ids.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint32_t * src = &(ros_message->order_ability_ids.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->order_ability_ids.size * sizeof(uint32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
