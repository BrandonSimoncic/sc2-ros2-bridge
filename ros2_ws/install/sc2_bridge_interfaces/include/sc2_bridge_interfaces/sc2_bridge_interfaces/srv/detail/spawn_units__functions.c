// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sc2_bridge_interfaces:srv/SpawnUnits.idl
// generated code does not contain a copyright notice
#include "sc2_bridge_interfaces/srv/detail/spawn_units__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `positions`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
sc2_bridge_interfaces__srv__SpawnUnits_Request__init(sc2_bridge_interfaces__srv__SpawnUnits_Request * msg)
{
  if (!msg) {
    return false;
  }
  // unit_type
  // owner
  // positions
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->positions, 0)) {
    sc2_bridge_interfaces__srv__SpawnUnits_Request__fini(msg);
    return false;
  }
  return true;
}

void
sc2_bridge_interfaces__srv__SpawnUnits_Request__fini(sc2_bridge_interfaces__srv__SpawnUnits_Request * msg)
{
  if (!msg) {
    return;
  }
  // unit_type
  // owner
  // positions
  geometry_msgs__msg__Point__Sequence__fini(&msg->positions);
}

bool
sc2_bridge_interfaces__srv__SpawnUnits_Request__are_equal(const sc2_bridge_interfaces__srv__SpawnUnits_Request * lhs, const sc2_bridge_interfaces__srv__SpawnUnits_Request * rhs)
{
  if (!lhs || !rhs) {
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
  // positions
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  return true;
}

bool
sc2_bridge_interfaces__srv__SpawnUnits_Request__copy(
  const sc2_bridge_interfaces__srv__SpawnUnits_Request * input,
  sc2_bridge_interfaces__srv__SpawnUnits_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // unit_type
  output->unit_type = input->unit_type;
  // owner
  output->owner = input->owner;
  // positions
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  return true;
}

sc2_bridge_interfaces__srv__SpawnUnits_Request *
sc2_bridge_interfaces__srv__SpawnUnits_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__srv__SpawnUnits_Request * msg = (sc2_bridge_interfaces__srv__SpawnUnits_Request *)allocator.allocate(sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Request));
  bool success = sc2_bridge_interfaces__srv__SpawnUnits_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sc2_bridge_interfaces__srv__SpawnUnits_Request__destroy(sc2_bridge_interfaces__srv__SpawnUnits_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sc2_bridge_interfaces__srv__SpawnUnits_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__init(sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__srv__SpawnUnits_Request * data = NULL;

  if (size) {
    data = (sc2_bridge_interfaces__srv__SpawnUnits_Request *)allocator.zero_allocate(size, sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sc2_bridge_interfaces__srv__SpawnUnits_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sc2_bridge_interfaces__srv__SpawnUnits_Request__fini(&data[i - 1]);
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
sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__fini(sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence * array)
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
      sc2_bridge_interfaces__srv__SpawnUnits_Request__fini(&array->data[i]);
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

sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence *
sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence * array = (sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence *)allocator.allocate(sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__destroy(sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__are_equal(const sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence * lhs, const sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sc2_bridge_interfaces__srv__SpawnUnits_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__copy(
  const sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence * input,
  sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sc2_bridge_interfaces__srv__SpawnUnits_Request * data =
      (sc2_bridge_interfaces__srv__SpawnUnits_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sc2_bridge_interfaces__srv__SpawnUnits_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sc2_bridge_interfaces__srv__SpawnUnits_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sc2_bridge_interfaces__srv__SpawnUnits_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `aliases`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `tags`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sc2_bridge_interfaces__srv__SpawnUnits_Response__init(sc2_bridge_interfaces__srv__SpawnUnits_Response * msg)
{
  if (!msg) {
    return false;
  }
  // aliases
  if (!rosidl_runtime_c__String__Sequence__init(&msg->aliases, 0)) {
    sc2_bridge_interfaces__srv__SpawnUnits_Response__fini(msg);
    return false;
  }
  // tags
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->tags, 0)) {
    sc2_bridge_interfaces__srv__SpawnUnits_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    sc2_bridge_interfaces__srv__SpawnUnits_Response__fini(msg);
    return false;
  }
  return true;
}

void
sc2_bridge_interfaces__srv__SpawnUnits_Response__fini(sc2_bridge_interfaces__srv__SpawnUnits_Response * msg)
{
  if (!msg) {
    return;
  }
  // aliases
  rosidl_runtime_c__String__Sequence__fini(&msg->aliases);
  // tags
  rosidl_runtime_c__uint64__Sequence__fini(&msg->tags);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
sc2_bridge_interfaces__srv__SpawnUnits_Response__are_equal(const sc2_bridge_interfaces__srv__SpawnUnits_Response * lhs, const sc2_bridge_interfaces__srv__SpawnUnits_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // aliases
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->aliases), &(rhs->aliases)))
  {
    return false;
  }
  // tags
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->tags), &(rhs->tags)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
sc2_bridge_interfaces__srv__SpawnUnits_Response__copy(
  const sc2_bridge_interfaces__srv__SpawnUnits_Response * input,
  sc2_bridge_interfaces__srv__SpawnUnits_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // aliases
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->aliases), &(output->aliases)))
  {
    return false;
  }
  // tags
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->tags), &(output->tags)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

sc2_bridge_interfaces__srv__SpawnUnits_Response *
sc2_bridge_interfaces__srv__SpawnUnits_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__srv__SpawnUnits_Response * msg = (sc2_bridge_interfaces__srv__SpawnUnits_Response *)allocator.allocate(sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Response));
  bool success = sc2_bridge_interfaces__srv__SpawnUnits_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sc2_bridge_interfaces__srv__SpawnUnits_Response__destroy(sc2_bridge_interfaces__srv__SpawnUnits_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sc2_bridge_interfaces__srv__SpawnUnits_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__init(sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__srv__SpawnUnits_Response * data = NULL;

  if (size) {
    data = (sc2_bridge_interfaces__srv__SpawnUnits_Response *)allocator.zero_allocate(size, sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sc2_bridge_interfaces__srv__SpawnUnits_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sc2_bridge_interfaces__srv__SpawnUnits_Response__fini(&data[i - 1]);
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
sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__fini(sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence * array)
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
      sc2_bridge_interfaces__srv__SpawnUnits_Response__fini(&array->data[i]);
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

sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence *
sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence * array = (sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence *)allocator.allocate(sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__destroy(sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__are_equal(const sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence * lhs, const sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sc2_bridge_interfaces__srv__SpawnUnits_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__copy(
  const sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence * input,
  sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sc2_bridge_interfaces__srv__SpawnUnits_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sc2_bridge_interfaces__srv__SpawnUnits_Response * data =
      (sc2_bridge_interfaces__srv__SpawnUnits_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sc2_bridge_interfaces__srv__SpawnUnits_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sc2_bridge_interfaces__srv__SpawnUnits_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sc2_bridge_interfaces__srv__SpawnUnits_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
