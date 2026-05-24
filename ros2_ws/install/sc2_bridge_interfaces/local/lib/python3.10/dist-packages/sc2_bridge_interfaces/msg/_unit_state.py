# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sc2_bridge_interfaces:msg/UnitState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'order_ability_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UnitState(type):
    """Metaclass of message 'UnitState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALLIANCE_SELF': 1,
        'ALLIANCE_ALLY': 2,
        'ALLIANCE_NEUTRAL': 3,
        'ALLIANCE_ENEMY': 4,
        'DISPLAY_VISIBLE': 1,
        'DISPLAY_SNAPSHOT': 2,
        'DISPLAY_HIDDEN': 3,
        'DISPLAY_PLACEHOLDER': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sc2_bridge_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sc2_bridge_interfaces.msg.UnitState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__unit_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__unit_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__unit_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__unit_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__unit_state

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALLIANCE_SELF': cls.__constants['ALLIANCE_SELF'],
            'ALLIANCE_ALLY': cls.__constants['ALLIANCE_ALLY'],
            'ALLIANCE_NEUTRAL': cls.__constants['ALLIANCE_NEUTRAL'],
            'ALLIANCE_ENEMY': cls.__constants['ALLIANCE_ENEMY'],
            'DISPLAY_VISIBLE': cls.__constants['DISPLAY_VISIBLE'],
            'DISPLAY_SNAPSHOT': cls.__constants['DISPLAY_SNAPSHOT'],
            'DISPLAY_HIDDEN': cls.__constants['DISPLAY_HIDDEN'],
            'DISPLAY_PLACEHOLDER': cls.__constants['DISPLAY_PLACEHOLDER'],
        }

    @property
    def ALLIANCE_SELF(self):
        """Message constant 'ALLIANCE_SELF'."""
        return Metaclass_UnitState.__constants['ALLIANCE_SELF']

    @property
    def ALLIANCE_ALLY(self):
        """Message constant 'ALLIANCE_ALLY'."""
        return Metaclass_UnitState.__constants['ALLIANCE_ALLY']

    @property
    def ALLIANCE_NEUTRAL(self):
        """Message constant 'ALLIANCE_NEUTRAL'."""
        return Metaclass_UnitState.__constants['ALLIANCE_NEUTRAL']

    @property
    def ALLIANCE_ENEMY(self):
        """Message constant 'ALLIANCE_ENEMY'."""
        return Metaclass_UnitState.__constants['ALLIANCE_ENEMY']

    @property
    def DISPLAY_VISIBLE(self):
        """Message constant 'DISPLAY_VISIBLE'."""
        return Metaclass_UnitState.__constants['DISPLAY_VISIBLE']

    @property
    def DISPLAY_SNAPSHOT(self):
        """Message constant 'DISPLAY_SNAPSHOT'."""
        return Metaclass_UnitState.__constants['DISPLAY_SNAPSHOT']

    @property
    def DISPLAY_HIDDEN(self):
        """Message constant 'DISPLAY_HIDDEN'."""
        return Metaclass_UnitState.__constants['DISPLAY_HIDDEN']

    @property
    def DISPLAY_PLACEHOLDER(self):
        """Message constant 'DISPLAY_PLACEHOLDER'."""
        return Metaclass_UnitState.__constants['DISPLAY_PLACEHOLDER']


class UnitState(metaclass=Metaclass_UnitState):
    """
    Message class 'UnitState'.

    Constants:
      ALLIANCE_SELF
      ALLIANCE_ALLY
      ALLIANCE_NEUTRAL
      ALLIANCE_ENEMY
      DISPLAY_VISIBLE
      DISPLAY_SNAPSHOT
      DISPLAY_HIDDEN
      DISPLAY_PLACEHOLDER
    """

    __slots__ = [
        '_tag',
        '_alias',
        '_unit_type',
        '_owner',
        '_alliance',
        '_display_type',
        '_position',
        '_facing',
        '_radius',
        '_health',
        '_health_max',
        '_energy',
        '_energy_max',
        '_is_alive',
        '_order_ability_ids',
    ]

    _fields_and_field_types = {
        'tag': 'uint64',
        'alias': 'string',
        'unit_type': 'uint32',
        'owner': 'uint32',
        'alliance': 'uint8',
        'display_type': 'uint8',
        'position': 'geometry_msgs/Point',
        'facing': 'float',
        'radius': 'float',
        'health': 'float',
        'health_max': 'float',
        'energy': 'float',
        'energy_max': 'float',
        'is_alive': 'boolean',
        'order_ability_ids': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tag = kwargs.get('tag', int())
        self.alias = kwargs.get('alias', str())
        self.unit_type = kwargs.get('unit_type', int())
        self.owner = kwargs.get('owner', int())
        self.alliance = kwargs.get('alliance', int())
        self.display_type = kwargs.get('display_type', int())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        self.facing = kwargs.get('facing', float())
        self.radius = kwargs.get('radius', float())
        self.health = kwargs.get('health', float())
        self.health_max = kwargs.get('health_max', float())
        self.energy = kwargs.get('energy', float())
        self.energy_max = kwargs.get('energy_max', float())
        self.is_alive = kwargs.get('is_alive', bool())
        self.order_ability_ids = array.array('I', kwargs.get('order_ability_ids', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.tag != other.tag:
            return False
        if self.alias != other.alias:
            return False
        if self.unit_type != other.unit_type:
            return False
        if self.owner != other.owner:
            return False
        if self.alliance != other.alliance:
            return False
        if self.display_type != other.display_type:
            return False
        if self.position != other.position:
            return False
        if self.facing != other.facing:
            return False
        if self.radius != other.radius:
            return False
        if self.health != other.health:
            return False
        if self.health_max != other.health_max:
            return False
        if self.energy != other.energy:
            return False
        if self.energy_max != other.energy_max:
            return False
        if self.is_alive != other.is_alive:
            return False
        if self.order_ability_ids != other.order_ability_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tag(self):
        """Message field 'tag'."""
        return self._tag

    @tag.setter
    def tag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tag' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'tag' field must be an unsigned integer in [0, 18446744073709551615]"
        self._tag = value

    @builtins.property
    def alias(self):
        """Message field 'alias'."""
        return self._alias

    @alias.setter
    def alias(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'alias' field must be of type 'str'"
        self._alias = value

    @builtins.property
    def unit_type(self):
        """Message field 'unit_type'."""
        return self._unit_type

    @unit_type.setter
    def unit_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'unit_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'unit_type' field must be an unsigned integer in [0, 4294967295]"
        self._unit_type = value

    @builtins.property
    def owner(self):
        """Message field 'owner'."""
        return self._owner

    @owner.setter
    def owner(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'owner' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'owner' field must be an unsigned integer in [0, 4294967295]"
        self._owner = value

    @builtins.property
    def alliance(self):
        """Message field 'alliance'."""
        return self._alliance

    @alliance.setter
    def alliance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alliance' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alliance' field must be an unsigned integer in [0, 255]"
        self._alliance = value

    @builtins.property
    def display_type(self):
        """Message field 'display_type'."""
        return self._display_type

    @display_type.setter
    def display_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'display_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'display_type' field must be an unsigned integer in [0, 255]"
        self._display_type = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def facing(self):
        """Message field 'facing'."""
        return self._facing

    @facing.setter
    def facing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'facing' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'facing' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._facing = value

    @builtins.property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._radius = value

    @builtins.property
    def health(self):
        """Message field 'health'."""
        return self._health

    @health.setter
    def health(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'health' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'health' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._health = value

    @builtins.property
    def health_max(self):
        """Message field 'health_max'."""
        return self._health_max

    @health_max.setter
    def health_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'health_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'health_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._health_max = value

    @builtins.property
    def energy(self):
        """Message field 'energy'."""
        return self._energy

    @energy.setter
    def energy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'energy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'energy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._energy = value

    @builtins.property
    def energy_max(self):
        """Message field 'energy_max'."""
        return self._energy_max

    @energy_max.setter
    def energy_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'energy_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'energy_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._energy_max = value

    @builtins.property
    def is_alive(self):
        """Message field 'is_alive'."""
        return self._is_alive

    @is_alive.setter
    def is_alive(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_alive' field must be of type 'bool'"
        self._is_alive = value

    @builtins.property
    def order_ability_ids(self):
        """Message field 'order_ability_ids'."""
        return self._order_ability_ids

    @order_ability_ids.setter
    def order_ability_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'order_ability_ids' array.array() must have the type code of 'I'"
            self._order_ability_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'order_ability_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._order_ability_ids = array.array('I', value)
