// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sc2_bridge_interfaces:msg/ContactMarkArray.idl
// generated code does not contain a copyright notice
#include "sc2_bridge_interfaces/msg/detail/contact_mark_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `marks`
#include "sc2_bridge_interfaces/msg/detail/contact_mark__functions.h"

bool
sc2_bridge_interfaces__msg__ContactMarkArray__init(sc2_bridge_interfaces__msg__ContactMarkArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sc2_bridge_interfaces__msg__ContactMarkArray__fini(msg);
    return false;
  }
  // marks
  if (!sc2_bridge_interfaces__msg__ContactMark__Sequence__init(&msg->marks, 0)) {
    sc2_bridge_interfaces__msg__ContactMarkArray__fini(msg);
    return false;
  }
  return true;
}

void
sc2_bridge_interfaces__msg__ContactMarkArray__fini(sc2_bridge_interfaces__msg__ContactMarkArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // marks
  sc2_bridge_interfaces__msg__ContactMark__Sequence__fini(&msg->marks);
}

bool
sc2_bridge_interfaces__msg__ContactMarkArray__are_equal(const sc2_bridge_interfaces__msg__ContactMarkArray * lhs, const sc2_bridge_interfaces__msg__ContactMarkArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // marks
  if (!sc2_bridge_interfaces__msg__ContactMark__Sequence__are_equal(
      &(lhs->marks), &(rhs->marks)))
  {
    return false;
  }
  return true;
}

bool
sc2_bridge_interfaces__msg__ContactMarkArray__copy(
  const sc2_bridge_interfaces__msg__ContactMarkArray * input,
  sc2_bridge_interfaces__msg__ContactMarkArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // marks
  if (!sc2_bridge_interfaces__msg__ContactMark__Sequence__copy(
      &(input->marks), &(output->marks)))
  {
    return false;
  }
  return true;
}

sc2_bridge_interfaces__msg__ContactMarkArray *
sc2_bridge_interfaces__msg__ContactMarkArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__ContactMarkArray * msg = (sc2_bridge_interfaces__msg__ContactMarkArray *)allocator.allocate(sizeof(sc2_bridge_interfaces__msg__ContactMarkArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sc2_bridge_interfaces__msg__ContactMarkArray));
  bool success = sc2_bridge_interfaces__msg__ContactMarkArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sc2_bridge_interfaces__msg__ContactMarkArray__destroy(sc2_bridge_interfaces__msg__ContactMarkArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sc2_bridge_interfaces__msg__ContactMarkArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__init(sc2_bridge_interfaces__msg__ContactMarkArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__ContactMarkArray * data = NULL;

  if (size) {
    data = (sc2_bridge_interfaces__msg__ContactMarkArray *)allocator.zero_allocate(size, sizeof(sc2_bridge_interfaces__msg__ContactMarkArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sc2_bridge_interfaces__msg__ContactMarkArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sc2_bridge_interfaces__msg__ContactMarkArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__fini(sc2_bridge_interfaces__msg__ContactMarkArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sc2_bridge_interfaces__msg__ContactMarkArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sc2_bridge_interfaces__msg__ContactMarkArray__Sequence *
sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__ContactMarkArray__Sequence * array = (sc2_bridge_interfaces__msg__ContactMarkArray__Sequence *)allocator.allocate(sizeof(sc2_bridge_interfaces__msg__ContactMarkArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__destroy(sc2_bridge_interfaces__msg__ContactMarkArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__are_equal(const sc2_bridge_interfaces__msg__ContactMarkArray__Sequence * lhs, const sc2_bridge_interfaces__msg__ContactMarkArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sc2_bridge_interfaces__msg__ContactMarkArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__copy(
  const sc2_bridge_interfaces__msg__ContactMarkArray__Sequence * input,
  sc2_bridge_interfaces__msg__ContactMarkArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sc2_bridge_interfaces__msg__ContactMarkArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sc2_bridge_interfaces__msg__ContactMarkArray * data =
      (sc2_bridge_interfaces__msg__ContactMarkArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sc2_bridge_interfaces__msg__ContactMarkArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sc2_bridge_interfaces__msg__ContactMarkArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sc2_bridge_interfaces__msg__ContactMarkArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
