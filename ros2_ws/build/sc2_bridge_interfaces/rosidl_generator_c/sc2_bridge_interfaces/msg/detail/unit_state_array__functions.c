// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sc2_bridge_interfaces:msg/UnitStateArray.idl
// generated code does not contain a copyright notice
#include "sc2_bridge_interfaces/msg/detail/unit_state_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `units`
#include "sc2_bridge_interfaces/msg/detail/unit_state__functions.h"

bool
sc2_bridge_interfaces__msg__UnitStateArray__init(sc2_bridge_interfaces__msg__UnitStateArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sc2_bridge_interfaces__msg__UnitStateArray__fini(msg);
    return false;
  }
  // game_loop
  // units
  if (!sc2_bridge_interfaces__msg__UnitState__Sequence__init(&msg->units, 0)) {
    sc2_bridge_interfaces__msg__UnitStateArray__fini(msg);
    return false;
  }
  return true;
}

void
sc2_bridge_interfaces__msg__UnitStateArray__fini(sc2_bridge_interfaces__msg__UnitStateArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // game_loop
  // units
  sc2_bridge_interfaces__msg__UnitState__Sequence__fini(&msg->units);
}

bool
sc2_bridge_interfaces__msg__UnitStateArray__are_equal(const sc2_bridge_interfaces__msg__UnitStateArray * lhs, const sc2_bridge_interfaces__msg__UnitStateArray * rhs)
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
  // game_loop
  if (lhs->game_loop != rhs->game_loop) {
    return false;
  }
  // units
  if (!sc2_bridge_interfaces__msg__UnitState__Sequence__are_equal(
      &(lhs->units), &(rhs->units)))
  {
    return false;
  }
  return true;
}

bool
sc2_bridge_interfaces__msg__UnitStateArray__copy(
  const sc2_bridge_interfaces__msg__UnitStateArray * input,
  sc2_bridge_interfaces__msg__UnitStateArray * output)
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
  // game_loop
  output->game_loop = input->game_loop;
  // units
  if (!sc2_bridge_interfaces__msg__UnitState__Sequence__copy(
      &(input->units), &(output->units)))
  {
    return false;
  }
  return true;
}

sc2_bridge_interfaces__msg__UnitStateArray *
sc2_bridge_interfaces__msg__UnitStateArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__UnitStateArray * msg = (sc2_bridge_interfaces__msg__UnitStateArray *)allocator.allocate(sizeof(sc2_bridge_interfaces__msg__UnitStateArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sc2_bridge_interfaces__msg__UnitStateArray));
  bool success = sc2_bridge_interfaces__msg__UnitStateArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sc2_bridge_interfaces__msg__UnitStateArray__destroy(sc2_bridge_interfaces__msg__UnitStateArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sc2_bridge_interfaces__msg__UnitStateArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sc2_bridge_interfaces__msg__UnitStateArray__Sequence__init(sc2_bridge_interfaces__msg__UnitStateArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__UnitStateArray * data = NULL;

  if (size) {
    data = (sc2_bridge_interfaces__msg__UnitStateArray *)allocator.zero_allocate(size, sizeof(sc2_bridge_interfaces__msg__UnitStateArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sc2_bridge_interfaces__msg__UnitStateArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sc2_bridge_interfaces__msg__UnitStateArray__fini(&data[i - 1]);
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
sc2_bridge_interfaces__msg__UnitStateArray__Sequence__fini(sc2_bridge_interfaces__msg__UnitStateArray__Sequence * array)
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
      sc2_bridge_interfaces__msg__UnitStateArray__fini(&array->data[i]);
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

sc2_bridge_interfaces__msg__UnitStateArray__Sequence *
sc2_bridge_interfaces__msg__UnitStateArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__UnitStateArray__Sequence * array = (sc2_bridge_interfaces__msg__UnitStateArray__Sequence *)allocator.allocate(sizeof(sc2_bridge_interfaces__msg__UnitStateArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sc2_bridge_interfaces__msg__UnitStateArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sc2_bridge_interfaces__msg__UnitStateArray__Sequence__destroy(sc2_bridge_interfaces__msg__UnitStateArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sc2_bridge_interfaces__msg__UnitStateArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sc2_bridge_interfaces__msg__UnitStateArray__Sequence__are_equal(const sc2_bridge_interfaces__msg__UnitStateArray__Sequence * lhs, const sc2_bridge_interfaces__msg__UnitStateArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sc2_bridge_interfaces__msg__UnitStateArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sc2_bridge_interfaces__msg__UnitStateArray__Sequence__copy(
  const sc2_bridge_interfaces__msg__UnitStateArray__Sequence * input,
  sc2_bridge_interfaces__msg__UnitStateArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sc2_bridge_interfaces__msg__UnitStateArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sc2_bridge_interfaces__msg__UnitStateArray * data =
      (sc2_bridge_interfaces__msg__UnitStateArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sc2_bridge_interfaces__msg__UnitStateArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sc2_bridge_interfaces__msg__UnitStateArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sc2_bridge_interfaces__msg__UnitStateArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
