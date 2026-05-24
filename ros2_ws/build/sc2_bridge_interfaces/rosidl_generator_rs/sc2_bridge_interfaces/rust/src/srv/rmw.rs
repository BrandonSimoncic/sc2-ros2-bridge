#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__srv__KillUnits_Request() -> *const std::ffi::c_void;
}

#[link(name = "sc2_bridge_interfaces__rosidl_generator_c")]
extern "C" {
    fn sc2_bridge_interfaces__srv__KillUnits_Request__init(msg: *mut KillUnits_Request) -> bool;
    fn sc2_bridge_interfaces__srv__KillUnits_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KillUnits_Request>, size: usize) -> bool;
    fn sc2_bridge_interfaces__srv__KillUnits_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KillUnits_Request>);
    fn sc2_bridge_interfaces__srv__KillUnits_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KillUnits_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<KillUnits_Request>) -> bool;
}

// Corresponds to sc2_bridge_interfaces__srv__KillUnits_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KillUnits_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub aliases: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for KillUnits_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sc2_bridge_interfaces__srv__KillUnits_Request__init(&mut msg as *mut _) {
        panic!("Call to sc2_bridge_interfaces__srv__KillUnits_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KillUnits_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__KillUnits_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__KillUnits_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__KillUnits_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KillUnits_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KillUnits_Request where Self: Sized {
  const TYPE_NAME: &'static str = "sc2_bridge_interfaces/srv/KillUnits_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__srv__KillUnits_Request() }
  }
}


#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__srv__KillUnits_Response() -> *const std::ffi::c_void;
}

#[link(name = "sc2_bridge_interfaces__rosidl_generator_c")]
extern "C" {
    fn sc2_bridge_interfaces__srv__KillUnits_Response__init(msg: *mut KillUnits_Response) -> bool;
    fn sc2_bridge_interfaces__srv__KillUnits_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KillUnits_Response>, size: usize) -> bool;
    fn sc2_bridge_interfaces__srv__KillUnits_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KillUnits_Response>);
    fn sc2_bridge_interfaces__srv__KillUnits_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KillUnits_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<KillUnits_Response>) -> bool;
}

// Corresponds to sc2_bridge_interfaces__srv__KillUnits_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KillUnits_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for KillUnits_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sc2_bridge_interfaces__srv__KillUnits_Response__init(&mut msg as *mut _) {
        panic!("Call to sc2_bridge_interfaces__srv__KillUnits_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KillUnits_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__KillUnits_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__KillUnits_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__KillUnits_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KillUnits_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KillUnits_Response where Self: Sized {
  const TYPE_NAME: &'static str = "sc2_bridge_interfaces/srv/KillUnits_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__srv__KillUnits_Response() }
  }
}


#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__srv__SpawnUnits_Request() -> *const std::ffi::c_void;
}

#[link(name = "sc2_bridge_interfaces__rosidl_generator_c")]
extern "C" {
    fn sc2_bridge_interfaces__srv__SpawnUnits_Request__init(msg: *mut SpawnUnits_Request) -> bool;
    fn sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpawnUnits_Request>, size: usize) -> bool;
    fn sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpawnUnits_Request>);
    fn sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpawnUnits_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SpawnUnits_Request>) -> bool;
}

// Corresponds to sc2_bridge_interfaces__srv__SpawnUnits_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnUnits_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub unit_type: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub owner: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,

}



impl Default for SpawnUnits_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sc2_bridge_interfaces__srv__SpawnUnits_Request__init(&mut msg as *mut _) {
        panic!("Call to sc2_bridge_interfaces__srv__SpawnUnits_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpawnUnits_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__SpawnUnits_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpawnUnits_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpawnUnits_Request where Self: Sized {
  const TYPE_NAME: &'static str = "sc2_bridge_interfaces/srv/SpawnUnits_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__srv__SpawnUnits_Request() }
  }
}


#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__srv__SpawnUnits_Response() -> *const std::ffi::c_void;
}

#[link(name = "sc2_bridge_interfaces__rosidl_generator_c")]
extern "C" {
    fn sc2_bridge_interfaces__srv__SpawnUnits_Response__init(msg: *mut SpawnUnits_Response) -> bool;
    fn sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpawnUnits_Response>, size: usize) -> bool;
    fn sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpawnUnits_Response>);
    fn sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpawnUnits_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SpawnUnits_Response>) -> bool;
}

// Corresponds to sc2_bridge_interfaces__srv__SpawnUnits_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnUnits_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub aliases: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tags: rosidl_runtime_rs::Sequence<u64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SpawnUnits_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sc2_bridge_interfaces__srv__SpawnUnits_Response__init(&mut msg as *mut _) {
        panic!("Call to sc2_bridge_interfaces__srv__SpawnUnits_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpawnUnits_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__srv__SpawnUnits_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpawnUnits_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpawnUnits_Response where Self: Sized {
  const TYPE_NAME: &'static str = "sc2_bridge_interfaces/srv/SpawnUnits_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__srv__SpawnUnits_Response() }
  }
}






#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__sc2_bridge_interfaces__srv__KillUnits() -> *const std::ffi::c_void;
}

// Corresponds to sc2_bridge_interfaces__srv__KillUnits
#[allow(missing_docs, non_camel_case_types)]
pub struct KillUnits;

impl rosidl_runtime_rs::Service for KillUnits {
    type Request = KillUnits_Request;
    type Response = KillUnits_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__sc2_bridge_interfaces__srv__KillUnits() }
    }
}




#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__sc2_bridge_interfaces__srv__SpawnUnits() -> *const std::ffi::c_void;
}

// Corresponds to sc2_bridge_interfaces__srv__SpawnUnits
#[allow(missing_docs, non_camel_case_types)]
pub struct SpawnUnits;

impl rosidl_runtime_rs::Service for SpawnUnits {
    type Request = SpawnUnits_Request;
    type Response = SpawnUnits_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__sc2_bridge_interfaces__srv__SpawnUnits() }
    }
}


