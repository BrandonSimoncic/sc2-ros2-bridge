#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to sc2_bridge_interfaces__msg__ContactMark

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub first_seen: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_seen: builtin_interfaces::msg::Time,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ContactMark::default())
  }
}

impl rosidl_runtime_rs::Message for ContactMark {
  type RmwMsg = super::msg::rmw::ContactMark;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mark_id: msg.mark_id,
        tag: msg.tag,
        unit_type: msg.unit_type,
        alliance: msg.alliance,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        first_seen: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.first_seen)).into_owned(),
        last_seen: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.last_seen)).into_owned(),
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mark_id: msg.mark_id,
      tag: msg.tag,
      unit_type: msg.unit_type,
      alliance: msg.alliance,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        first_seen: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.first_seen)).into_owned(),
        last_seen: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.last_seen)).into_owned(),
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mark_id: msg.mark_id,
      tag: msg.tag,
      unit_type: msg.unit_type,
      alliance: msg.alliance,
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      first_seen: builtin_interfaces::msg::Time::from_rmw_message(msg.first_seen),
      last_seen: builtin_interfaces::msg::Time::from_rmw_message(msg.last_seen),
      status: msg.status,
    }
  }
}


// Corresponds to sc2_bridge_interfaces__msg__ContactMarkArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ContactMarkArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub marks: Vec<super::msg::ContactMark>,

}



impl Default for ContactMarkArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ContactMarkArray::default())
  }
}

impl rosidl_runtime_rs::Message for ContactMarkArray {
  type RmwMsg = super::msg::rmw::ContactMarkArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        marks: msg.marks
          .into_iter()
          .map(|elem| super::msg::ContactMark::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        marks: msg.marks
          .iter()
          .map(|elem| super::msg::ContactMark::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      marks: msg.marks
          .into_iter()
          .map(super::msg::ContactMark::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to sc2_bridge_interfaces__msg__GameInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GameInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub game_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub realtime: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world_frame_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub playable_min: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub playable_max: geometry_msgs::msg::Point,

}



impl Default for GameInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GameInfo::default())
  }
}

impl rosidl_runtime_rs::Message for GameInfo {
  type RmwMsg = super::msg::rmw::GameInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        map_name: msg.map_name.as_str().into(),
        game_version: msg.game_version.as_str().into(),
        realtime: msg.realtime,
        world_frame_id: msg.world_frame_id.as_str().into(),
        playable_min: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.playable_min)).into_owned(),
        playable_max: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.playable_max)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        map_name: msg.map_name.as_str().into(),
        game_version: msg.game_version.as_str().into(),
      realtime: msg.realtime,
        world_frame_id: msg.world_frame_id.as_str().into(),
        playable_min: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.playable_min)).into_owned(),
        playable_max: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.playable_max)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      map_name: msg.map_name.to_string(),
      game_version: msg.game_version.to_string(),
      realtime: msg.realtime,
      world_frame_id: msg.world_frame_id.to_string(),
      playable_min: geometry_msgs::msg::Point::from_rmw_message(msg.playable_min),
      playable_max: geometry_msgs::msg::Point::from_rmw_message(msg.playable_max),
    }
  }
}


// Corresponds to sc2_bridge_interfaces__msg__UnitState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnitState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tag: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alias: std::string::String,


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
    pub position: geometry_msgs::msg::Point,


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
    pub order_ability_ids: Vec<u32>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UnitState::default())
  }
}

impl rosidl_runtime_rs::Message for UnitState {
  type RmwMsg = super::msg::rmw::UnitState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tag: msg.tag,
        alias: msg.alias.as_str().into(),
        unit_type: msg.unit_type,
        owner: msg.owner,
        alliance: msg.alliance,
        display_type: msg.display_type,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        facing: msg.facing,
        radius: msg.radius,
        health: msg.health,
        health_max: msg.health_max,
        energy: msg.energy,
        energy_max: msg.energy_max,
        is_alive: msg.is_alive,
        order_ability_ids: msg.order_ability_ids.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      tag: msg.tag,
        alias: msg.alias.as_str().into(),
      unit_type: msg.unit_type,
      owner: msg.owner,
      alliance: msg.alliance,
      display_type: msg.display_type,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
      facing: msg.facing,
      radius: msg.radius,
      health: msg.health,
      health_max: msg.health_max,
      energy: msg.energy,
      energy_max: msg.energy_max,
      is_alive: msg.is_alive,
        order_ability_ids: msg.order_ability_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tag: msg.tag,
      alias: msg.alias.to_string(),
      unit_type: msg.unit_type,
      owner: msg.owner,
      alliance: msg.alliance,
      display_type: msg.display_type,
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      facing: msg.facing,
      radius: msg.radius,
      health: msg.health,
      health_max: msg.health_max,
      energy: msg.energy,
      energy_max: msg.energy_max,
      is_alive: msg.is_alive,
      order_ability_ids: msg.order_ability_ids
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to sc2_bridge_interfaces__msg__UnitStateArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnitStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub game_loop: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub units: Vec<super::msg::UnitState>,

}



impl Default for UnitStateArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UnitStateArray::default())
  }
}

impl rosidl_runtime_rs::Message for UnitStateArray {
  type RmwMsg = super::msg::rmw::UnitStateArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        game_loop: msg.game_loop,
        units: msg.units
          .into_iter()
          .map(|elem| super::msg::UnitState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      game_loop: msg.game_loop,
        units: msg.units
          .iter()
          .map(|elem| super::msg::UnitState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      game_loop: msg.game_loop,
      units: msg.units
          .into_iter()
          .map(super::msg::UnitState::from_rmw_message)
          .collect(),
    }
  }
}


