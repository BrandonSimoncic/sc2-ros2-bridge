// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sc2_bridge_interfaces:msg/UnitState.idl
// generated code does not contain a copyright notice
#include "sc2_bridge_interfaces/msg/detail/unit_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `alias`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `order_ability_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sc2_bridge_interfaces__msg__UnitState__init(sc2_bridge_interfaces__msg__UnitState * msg)
{
  if (!msg) {
    return false;
  }
  // tag
  // alias
  if (!rosidl_runtime_c__String__init(&msg->alias)) {
    sc2_bridge_interfaces__msg__UnitState__fini(msg);
    return false;
  }
  // unit_type
  // owner
  // alliance
  // display_type
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    sc2_bridge_interfaces__msg__UnitState__fini(msg);
    return false;
  }
  // facing
  // radius
  // health
  // health_max
  // energy
  // energy_max
  // is_alive
  // order_ability_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->order_ability_ids, 0)) {
    sc2_bridge_interfaces__msg__UnitState__fini(msg);
    return false;
  }
  return true;
}

void
sc2_bridge_interfaces__msg__UnitState__fini(sc2_bridge_interfaces__msg__UnitState * msg)
{
  if (!msg) {
    return;
  }
  // tag
  // alias
  rosidl_runtime_c__String__fini(&msg->alias);
  // unit_type
  // owner
  // alliance
  // display_type
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // facing
  // radius
  // health
  // health_max
  // energy
  // energy_max
  // is_alive
  // order_ability_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->order_ability_ids);
}

bool
sc2_bridge_interfaces__msg__UnitState__are_equal(const sc2_bridge_interfaces__msg__UnitState * lhs, const sc2_bridge_interfaces__msg__UnitState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tag
  if (lhs->tag != rhs->tag) {
    return false;
  }
  // alias
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->alias), &(rhs->alias)))
  {
    return false;
  }
  // unit_type
  if (lhs->unit_type != rhs->unit_type) {
    return false;
  }
  // owner
  if (lhs->owner != rhs->owner) {
    return false;
  }
  // alliance
  if (lhs->alliance != rhs->alliance) {
    return false;
  }
  // display_type
  if (lhs->display_type != rhs->display_type) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // facing
  if (lhs->facing != rhs->facing) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // health
  if (lhs->health != rhs->health) {
    return false;
  }
  // health_max
  if (lhs->health_max != rhs->health_max) {
    return false;
  }
  // energy
  if (lhs->energy != rhs->energy) {
    return false;
  }
  // energy_max
  if (lhs->energy_max != rhs->energy_max) {
    return false;
  }
  // is_alive
  if (lhs->is_alive != rhs->is_alive) {
    return false;
  }
  // order_ability_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->order_ability_ids), &(rhs->order_ability_ids)))
  {
    return false;
  }
  return true;
}

bool
sc2_bridge_interfaces__msg__UnitState__copy(
  const sc2_bridge_interfaces__msg__UnitState * input,
  sc2_bridge_interfaces__msg__UnitState * output)
{
  if (!input || !output) {
    return false;
  }
  // tag
  output->tag = input->tag;
  // alias
  if (!rosidl_runtime_c__String__copy(
      &(input->alias), &(output->alias)))
  {
    return false;
  }
  // unit_type
  output->unit_type = input->unit_type;
  // owner
  output->owner = input->owner;
  // alliance
  output->alliance = input->alliance;
  // display_type
  output->display_type = input->display_type;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // facing
  output->facing = input->facing;
  // radius
  output->radius = input->radius;
  // health
  output->health = input->health;
  // health_max
  output->health_max = input->health_max;
  // energy
  output->energy = input->energy;
  // energy_max
  output->energy_max = input->energy_max;
  // is_alive
  output->is_alive = input->is_alive;
  // order_ability_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->order_ability_ids), &(output->order_ability_ids)))
  {
    return false;
  }
  return true;
}

sc2_bridge_interfaces__msg__UnitState *
sc2_bridge_interfaces__msg__UnitState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__UnitState * msg = (sc2_bridge_interfaces__msg__UnitState *)allocator.allocate(sizeof(sc2_bridge_interfaces__msg__UnitState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sc2_bridge_interfaces__msg__UnitState));
  bool success = sc2_bridge_interfaces__msg__UnitState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sc2_bridge_interfaces__msg__UnitState__destroy(sc2_bridge_interfaces__msg__UnitState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sc2_bridge_interfaces__msg__UnitState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sc2_bridge_interfaces__msg__UnitState__Sequence__init(sc2_bridge_interfaces__msg__UnitState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__UnitState * data = NULL;

  if (size) {
    data = (sc2_bridge_interfaces__msg__UnitState *)allocator.zero_allocate(size, sizeof(sc2_bridge_interfaces__msg__UnitState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sc2_bridge_interfaces__msg__UnitState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sc2_bridge_interfaces__msg__UnitState__fini(&data[i - 1]);
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
sc2_bridge_interfaces__msg__UnitState__Sequence__fini(sc2_bridge_interfaces__msg__UnitState__Sequence * array)
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
      sc2_bridge_interfaces__msg__UnitState__fini(&array->data[i]);
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

sc2_bridge_interfaces__msg__UnitState__Sequence *
sc2_bridge_interfaces__msg__UnitState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__UnitState__Sequence * array = (sc2_bridge_interfaces__msg__UnitState__Sequence *)allocator.allocate(sizeof(sc2_bridge_interfaces__msg__UnitState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sc2_bridge_interfaces__msg__UnitState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sc2_bridge_interfaces__msg__UnitState__Sequence__destroy(sc2_bridge_interfaces__msg__UnitState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sc2_bridge_interfaces__msg__UnitState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sc2_bridge_interfaces__msg__UnitState__Sequence__are_equal(const sc2_bridge_interfaces__msg__UnitState__Sequence * lhs, const sc2_bridge_interfaces__msg__UnitState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sc2_bridge_interfaces__msg__UnitState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sc2_bridge_interfaces__msg__UnitState__Sequence__copy(
  const sc2_bridge_interfaces__msg__UnitState__Sequence * input,
  sc2_bridge_interfaces__msg__UnitState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sc2_bridge_interfaces__msg__UnitState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sc2_bridge_interfaces__msg__UnitState * data =
      (sc2_bridge_interfaces__msg__UnitState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sc2_bridge_interfaces__msg__UnitState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sc2_bridge_interfaces__msg__UnitState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sc2_bridge_interfaces__msg__UnitState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
