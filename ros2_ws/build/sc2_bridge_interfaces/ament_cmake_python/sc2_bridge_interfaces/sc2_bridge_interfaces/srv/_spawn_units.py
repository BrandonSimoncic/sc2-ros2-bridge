# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sc2_bridge_interfaces:srv/SpawnUnits.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpawnUnits_Request(type):
    """Metaclass of message 'SpawnUnits_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'sc2_bridge_interfaces.srv.SpawnUnits_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spawn_units__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spawn_units__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spawn_units__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spawn_units__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spawn_units__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpawnUnits_Request(metaclass=Metaclass_SpawnUnits_Request):
    """Message class 'SpawnUnits_Request'."""

    __slots__ = [
        '_unit_type',
        '_owner',
        '_positions',
    ]

    _fields_and_field_types = {
        'unit_type': 'uint32',
        'owner': 'uint32',
        'positions': 'sequence<geometry_msgs/Point>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.unit_type = kwargs.get('unit_type', int())
        self.owner = kwargs.get('owner', int())
        self.positions = kwargs.get('positions', [])

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
        if self.unit_type != other.unit_type:
            return False
        if self.owner != other.owner:
            return False
        if self.positions != other.positions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def positions(self):
        """Message field 'positions'."""
        return self._positions

    @positions.setter
    def positions(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'positions' field must be a set or sequence and each value of type 'Point'"
        self._positions = value


# Import statements for member types

# Member 'tags'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SpawnUnits_Response(type):
    """Metaclass of message 'SpawnUnits_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'sc2_bridge_interfaces.srv.SpawnUnits_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spawn_units__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spawn_units__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spawn_units__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spawn_units__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spawn_units__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpawnUnits_Response(metaclass=Metaclass_SpawnUnits_Response):
    """Message class 'SpawnUnits_Response'."""

    __slots__ = [
        '_aliases',
        '_tags',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'aliases': 'sequence<string>',
        'tags': 'sequence<uint64>',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.aliases = kwargs.get('aliases', [])
        self.tags = array.array('Q', kwargs.get('tags', []))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.aliases != other.aliases:
            return False
        if self.tags != other.tags:
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def aliases(self):
        """Message field 'aliases'."""
        return self._aliases

    @aliases.setter
    def aliases(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'aliases' field must be a set or sequence and each value of type 'str'"
        self._aliases = value

    @builtins.property
    def tags(self):
        """Message field 'tags'."""
        return self._tags

    @tags.setter
    def tags(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'tags' array.array() must have the type code of 'Q'"
            self._tags = value
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
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'tags' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._tags = array.array('Q', value)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SpawnUnits(type):
    """Metaclass of service 'SpawnUnits'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sc2_bridge_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sc2_bridge_interfaces.srv.SpawnUnits')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__spawn_units

            from sc2_bridge_interfaces.srv import _spawn_units
            if _spawn_units.Metaclass_SpawnUnits_Request._TYPE_SUPPORT is None:
                _spawn_units.Metaclass_SpawnUnits_Request.__import_type_support__()
            if _spawn_units.Metaclass_SpawnUnits_Response._TYPE_SUPPORT is None:
                _spawn_units.Metaclass_SpawnUnits_Response.__import_type_support__()


class SpawnUnits(metaclass=Metaclass_SpawnUnits):
    from sc2_bridge_interfaces.srv._spawn_units import SpawnUnits_Request as Request
    from sc2_bridge_interfaces.srv._spawn_units import SpawnUnits_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
