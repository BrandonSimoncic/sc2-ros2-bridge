#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__msg__ContactMark() -> *const std::ffi::c_void;
}

#[link(name = "sc2_bridge_interfaces__rosidl_generator_c")]
extern "C" {
    fn sc2_bridge_interfaces__msg__ContactMark__init(msg: *mut ContactMark) -> bool;
    fn sc2_bridge_interfaces__msg__ContactMark__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ContactMark>, size: usize) -> bool;
    fn sc2_bridge_interfaces__msg__ContactMark__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ContactMark>);
    fn sc2_bridge_interfaces__msg__ContactMark__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ContactMark>, out_seq: *mut rosidl_runtime_rs::Sequence<ContactMark>) -> bool;
}

// Corresponds to sc2_bridge_interfaces__msg__ContactMark
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ContactMark {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mark_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tag: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit_type: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alliance: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub first_seen: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_seen: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,

}

impl ContactMark {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_VISIBLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FOGGED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_DESTROYED: u8 = 2;

}


impl Default for ContactMark {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sc2_bridge_interfaces__msg__ContactMark__init(&mut msg as *mut _) {
        panic!("Call to sc2_bridge_interfaces__msg__ContactMark__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ContactMark {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__ContactMark__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__ContactMark__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__ContactMark__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ContactMark {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ContactMark where Self: Sized {
  const TYPE_NAME: &'static str = "sc2_bridge_interfaces/msg/ContactMark";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__msg__ContactMark() }
  }
}


#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__msg__ContactMarkArray() -> *const std::ffi::c_void;
}

#[link(name = "sc2_bridge_interfaces__rosidl_generator_c")]
extern "C" {
    fn sc2_bridge_interfaces__msg__ContactMarkArray__init(msg: *mut ContactMarkArray) -> bool;
    fn sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ContactMarkArray>, size: usize) -> bool;
    fn sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ContactMarkArray>);
    fn sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ContactMarkArray>, out_seq: *mut rosidl_runtime_rs::Sequence<ContactMarkArray>) -> bool;
}

// Corresponds to sc2_bridge_interfaces__msg__ContactMarkArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ContactMarkArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub marks: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ContactMark>,

}



impl Default for ContactMarkArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sc2_bridge_interfaces__msg__ContactMarkArray__init(&mut msg as *mut _) {
        panic!("Call to sc2_bridge_interfaces__msg__ContactMarkArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ContactMarkArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__ContactMarkArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ContactMarkArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ContactMarkArray where Self: Sized {
  const TYPE_NAME: &'static str = "sc2_bridge_interfaces/msg/ContactMarkArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__msg__ContactMarkArray() }
  }
}


#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__msg__GameInfo() -> *const std::ffi::c_void;
}

#[link(name = "sc2_bridge_interfaces__rosidl_generator_c")]
extern "C" {
    fn sc2_bridge_interfaces__msg__GameInfo__init(msg: *mut GameInfo) -> bool;
    fn sc2_bridge_interfaces__msg__GameInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GameInfo>, size: usize) -> bool;
    fn sc2_bridge_interfaces__msg__GameInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GameInfo>);
    fn sc2_bridge_interfaces__msg__GameInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GameInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<GameInfo>) -> bool;
}

// Corresponds to sc2_bridge_interfaces__msg__GameInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GameInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub game_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub realtime: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world_frame_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub playable_min: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub playable_max: geometry_msgs::msg::rmw::Point,

}



impl Default for GameInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sc2_bridge_interfaces__msg__GameInfo__init(&mut msg as *mut _) {
        panic!("Call to sc2_bridge_interfaces__msg__GameInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GameInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__GameInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__GameInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__GameInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GameInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GameInfo where Self: Sized {
  const TYPE_NAME: &'static str = "sc2_bridge_interfaces/msg/GameInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__msg__GameInfo() }
  }
}


#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__msg__UnitState() -> *const std::ffi::c_void;
}

#[link(name = "sc2_bridge_interfaces__rosidl_generator_c")]
extern "C" {
    fn sc2_bridge_interfaces__msg__UnitState__init(msg: *mut UnitState) -> bool;
    fn sc2_bridge_interfaces__msg__UnitState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UnitState>, size: usize) -> bool;
    fn sc2_bridge_interfaces__msg__UnitState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UnitState>);
    fn sc2_bridge_interfaces__msg__UnitState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UnitState>, out_seq: *mut rosidl_runtime_rs::Sequence<UnitState>) -> bool;
}

// Corresponds to sc2_bridge_interfaces__msg__UnitState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnitState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tag: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alias: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit_type: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub owner: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alliance: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub display_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub facing: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub health: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub health_max: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub energy: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub energy_max: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_alive: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub order_ability_ids: rosidl_runtime_rs::Sequence<u32>,

}

impl UnitState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ALLIANCE_SELF: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ALLIANCE_ALLY: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ALLIANCE_NEUTRAL: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ALLIANCE_ENEMY: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DISPLAY_VISIBLE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DISPLAY_SNAPSHOT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DISPLAY_HIDDEN: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DISPLAY_PLACEHOLDER: u8 = 4;

}


impl Default for UnitState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sc2_bridge_interfaces__msg__UnitState__init(&mut msg as *mut _) {
        panic!("Call to sc2_bridge_interfaces__msg__UnitState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UnitState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__UnitState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__UnitState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__UnitState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UnitState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UnitState where Self: Sized {
  const TYPE_NAME: &'static str = "sc2_bridge_interfaces/msg/UnitState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__msg__UnitState() }
  }
}


#[link(name = "sc2_bridge_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__msg__UnitStateArray() -> *const std::ffi::c_void;
}

#[link(name = "sc2_bridge_interfaces__rosidl_generator_c")]
extern "C" {
    fn sc2_bridge_interfaces__msg__UnitStateArray__init(msg: *mut UnitStateArray) -> bool;
    fn sc2_bridge_interfaces__msg__UnitStateArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UnitStateArray>, size: usize) -> bool;
    fn sc2_bridge_interfaces__msg__UnitStateArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UnitStateArray>);
    fn sc2_bridge_interfaces__msg__UnitStateArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UnitStateArray>, out_seq: *mut rosidl_runtime_rs::Sequence<UnitStateArray>) -> bool;
}

// Corresponds to sc2_bridge_interfaces__msg__UnitStateArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnitStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub game_loop: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub units: rosidl_runtime_rs::Sequence<super::super::msg::rmw::UnitState>,

}



impl Default for UnitStateArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sc2_bridge_interfaces__msg__UnitStateArray__init(&mut msg as *mut _) {
        panic!("Call to sc2_bridge_interfaces__msg__UnitStateArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UnitStateArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__UnitStateArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__UnitStateArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sc2_bridge_interfaces__msg__UnitStateArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UnitStateArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UnitStateArray where Self: Sized {
  const TYPE_NAME: &'static str = "sc2_bridge_interfaces/msg/UnitStateArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sc2_bridge_interfaces__msg__UnitStateArray() }
  }
}


