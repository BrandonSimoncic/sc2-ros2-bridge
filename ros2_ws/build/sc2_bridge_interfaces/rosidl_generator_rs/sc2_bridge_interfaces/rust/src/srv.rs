#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to sc2_bridge_interfaces__srv__KillUnits_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KillUnits_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub aliases: Vec<std::string::String>,

}



impl Default for KillUnits_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::KillUnits_Request::default())
  }
}

impl rosidl_runtime_rs::Message for KillUnits_Request {
  type RmwMsg = super::srv::rmw::KillUnits_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        aliases: msg.aliases
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        aliases: msg.aliases
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      aliases: msg.aliases
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to sc2_bridge_interfaces__srv__KillUnits_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KillUnits_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for KillUnits_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::KillUnits_Response::default())
  }
}

impl rosidl_runtime_rs::Message for KillUnits_Response {
  type RmwMsg = super::srv::rmw::KillUnits_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to sc2_bridge_interfaces__srv__SpawnUnits_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub positions: Vec<geometry_msgs::msg::Point>,

}



impl Default for SpawnUnits_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SpawnUnits_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SpawnUnits_Request {
  type RmwMsg = super::srv::rmw::SpawnUnits_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        unit_type: msg.unit_type,
        owner: msg.owner,
        positions: msg.positions
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      unit_type: msg.unit_type,
      owner: msg.owner,
        positions: msg.positions
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      unit_type: msg.unit_type,
      owner: msg.owner,
      positions: msg.positions
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to sc2_bridge_interfaces__srv__SpawnUnits_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnUnits_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub aliases: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tags: Vec<u64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SpawnUnits_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SpawnUnits_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SpawnUnits_Response {
  type RmwMsg = super::srv::rmw::SpawnUnits_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        aliases: msg.aliases
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        tags: msg.tags.into(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        aliases: msg.aliases
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        tags: msg.tags.as_slice().into(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      aliases: msg.aliases
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      tags: msg.tags
          .into_iter()
          .collect(),
      success: msg.success,
      message: msg.message.to_string(),
    }
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


