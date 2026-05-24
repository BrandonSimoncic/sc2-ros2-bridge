// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sc2_bridge_interfaces:msg/ContactMark.idl
// generated code does not contain a copyright notice
#include "sc2_bridge_interfaces/msg/detail/contact_mark__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `first_seen`
// Member `last_seen`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
sc2_bridge_interfaces__msg__ContactMark__init(sc2_bridge_interfaces__msg__ContactMark * msg)
{
  if (!msg) {
    return false;
  }
  // mark_id
  // tag
  // unit_type
  // alliance
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    sc2_bridge_interfaces__msg__ContactMark__fini(msg);
    return false;
  }
  // first_seen
  if (!builtin_interfaces__msg__Time__init(&msg->first_seen)) {
    sc2_bridge_interfaces__msg__ContactMark__fini(msg);
    return false;
  }
  // last_seen
  if (!builtin_interfaces__msg__Time__init(&msg->last_seen)) {
    sc2_bridge_interfaces__msg__ContactMark__fini(msg);
    return false;
  }
  // status
  return true;
}

void
sc2_bridge_interfaces__msg__ContactMark__fini(sc2_bridge_interfaces__msg__ContactMark * msg)
{
  if (!msg) {
    return;
  }
  // mark_id
  // tag
  // unit_type
  // alliance
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // first_seen
  builtin_interfaces__msg__Time__fini(&msg->first_seen);
  // last_seen
  builtin_interfaces__msg__Time__fini(&msg->last_seen);
  // status
}

bool
sc2_bridge_interfaces__msg__ContactMark__are_equal(const sc2_bridge_interfaces__msg__ContactMark * lhs, const sc2_bridge_interfaces__msg__ContactMark * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mark_id
  if (lhs->mark_id != rhs->mark_id) {
    return false;
  }
  // tag
  if (lhs->tag != rhs->tag) {
    return false;
  }
  // unit_type
  if (lhs->unit_type != rhs->unit_type) {
    return false;
  }
  // alliance
  if (lhs->alliance != rhs->alliance) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // first_seen
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->first_seen), &(rhs->first_seen)))
  {
    return false;
  }
  // last_seen
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_seen), &(rhs->last_seen)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
sc2_bridge_interfaces__msg__ContactMark__copy(
  const sc2_bridge_interfaces__msg__ContactMark * input,
  sc2_bridge_interfaces__msg__ContactMark * output)
{
  if (!input || !output) {
    return false;
  }
  // mark_id
  output->mark_id = input->mark_id;
  // tag
  output->tag = input->tag;
  // unit_type
  output->unit_type = input->unit_type;
  // alliance
  output->alliance = input->alliance;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // first_seen
  if (!builtin_interfaces__msg__Time__copy(
      &(input->first_seen), &(output->first_seen)))
  {
    return false;
  }
  // last_seen
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_seen), &(output->last_seen)))
  {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

sc2_bridge_interfaces__msg__ContactMark *
sc2_bridge_interfaces__msg__ContactMark__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__ContactMark * msg = (sc2_bridge_interfaces__msg__ContactMark *)allocator.allocate(sizeof(sc2_bridge_interfaces__msg__ContactMark), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sc2_bridge_interfaces__msg__ContactMark));
  bool success = sc2_bridge_interfaces__msg__ContactMark__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sc2_bridge_interfaces__msg__ContactMark__destroy(sc2_bridge_interfaces__msg__ContactMark * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sc2_bridge_interfaces__msg__ContactMark__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sc2_bridge_interfaces__msg__ContactMark__Sequence__init(sc2_bridge_interfaces__msg__ContactMark__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__ContactMark * data = NULL;

  if (size) {
    data = (sc2_bridge_interfaces__msg__ContactMark *)allocator.zero_allocate(size, sizeof(sc2_bridge_interfaces__msg__ContactMark), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sc2_bridge_interfaces__msg__ContactMark__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sc2_bridge_interfaces__msg__ContactMark__fini(&data[i - 1]);
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
sc2_bridge_interfaces__msg__ContactMark__Sequence__fini(sc2_bridge_interfaces__msg__ContactMark__Sequence * array)
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
      sc2_bridge_interfaces__msg__ContactMark__fini(&array->data[i]);
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

sc2_bridge_interfaces__msg__ContactMark__Sequence *
sc2_bridge_interfaces__msg__ContactMark__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__ContactMark__Sequence * array = (sc2_bridge_interfaces__msg__ContactMark__Sequence *)allocator.allocate(sizeof(sc2_bridge_interfaces__msg__ContactMark__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sc2_bridge_interfaces__msg__ContactMark__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sc2_bridge_interfaces__msg__ContactMark__Sequence__destroy(sc2_bridge_interfaces__msg__ContactMark__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sc2_bridge_interfaces__msg__ContactMark__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sc2_bridge_interfaces__msg__ContactMark__Sequence__are_equal(const sc2_bridge_interfaces__msg__ContactMark__Sequence * lhs, const sc2_bridge_interfaces__msg__ContactMark__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sc2_bridge_interfaces__msg__ContactMark__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sc2_bridge_interfaces__msg__ContactMark__Sequence__copy(
  const sc2_bridge_interfaces__msg__ContactMark__Sequence * input,
  sc2_bridge_interfaces__msg__ContactMark__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sc2_bridge_interfaces__msg__ContactMark);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sc2_bridge_interfaces__msg__ContactMark * data =
      (sc2_bridge_interfaces__msg__ContactMark *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sc2_bridge_interfaces__msg__ContactMark__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sc2_bridge_interfaces__msg__ContactMark__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sc2_bridge_interfaces__msg__ContactMark__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
