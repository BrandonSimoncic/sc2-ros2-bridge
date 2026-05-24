# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sc2_bridge_interfaces:msg/ContactMark.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ContactMark(type):
    """Metaclass of message 'ContactMark'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_VISIBLE': 0,
        'STATUS_FOGGED': 1,
        'STATUS_DESTROYED': 2,
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
                'sc2_bridge_interfaces.msg.ContactMark')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__contact_mark
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__contact_mark
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__contact_mark
            cls._TYPE_SUPPORT = module.type_support_msg__msg__contact_mark
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__contact_mark

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_VISIBLE': cls.__constants['STATUS_VISIBLE'],
            'STATUS_FOGGED': cls.__constants['STATUS_FOGGED'],
            'STATUS_DESTROYED': cls.__constants['STATUS_DESTROYED'],
        }

    @property
    def STATUS_VISIBLE(self):
        """Message constant 'STATUS_VISIBLE'."""
        return Metaclass_ContactMark.__constants['STATUS_VISIBLE']

    @property
    def STATUS_FOGGED(self):
        """Message constant 'STATUS_FOGGED'."""
        return Metaclass_ContactMark.__constants['STATUS_FOGGED']

    @property
    def STATUS_DESTROYED(self):
        """Message constant 'STATUS_DESTROYED'."""
        return Metaclass_ContactMark.__constants['STATUS_DESTROYED']


class ContactMark(metaclass=Metaclass_ContactMark):
    """
    Message class 'ContactMark'.

    Constants:
      STATUS_VISIBLE
      STATUS_FOGGED
      STATUS_DESTROYED
    """

    __slots__ = [
        '_mark_id',
        '_tag',
        '_unit_type',
        '_alliance',
        '_position',
        '_first_seen',
        '_last_seen',
        '_status',
    ]

    _fields_and_field_types = {
        'mark_id': 'uint32',
        'tag': 'uint64',
        'unit_type': 'uint32',
        'alliance': 'uint8',
        'position': 'geometry_msgs/Point',
        'first_seen': 'builtin_interfaces/Time',
        'last_seen': 'builtin_interfaces/Time',
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mark_id = kwargs.get('mark_id', int())
        self.tag = kwargs.get('tag', int())
        self.unit_type = kwargs.get('unit_type', int())
        self.alliance = kwargs.get('alliance', int())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        from builtin_interfaces.msg import Time
        self.first_seen = kwargs.get('first_seen', Time())
        from builtin_interfaces.msg import Time
        self.last_seen = kwargs.get('last_seen', Time())
        self.status = kwargs.get('status', int())

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
        if self.mark_id != other.mark_id:
            return False
        if self.tag != other.tag:
            return False
        if self.unit_type != other.unit_type:
            return False
        if self.alliance != other.alliance:
            return False
        if self.position != other.position:
            return False
        if self.first_seen != other.first_seen:
            return False
        if self.last_seen != other.last_seen:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mark_id(self):
        """Message field 'mark_id'."""
        return self._mark_id

    @mark_id.setter
    def mark_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mark_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mark_id' field must be an unsigned integer in [0, 4294967295]"
        self._mark_id = value

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
    def first_seen(self):
        """Message field 'first_seen'."""
        return self._first_seen

    @first_seen.setter
    def first_seen(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'first_seen' field must be a sub message of type 'Time'"
        self._first_seen = value

    @builtins.property
    def last_seen(self):
        """Message field 'last_seen'."""
        return self._last_seen

    @last_seen.setter
    def last_seen(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'last_seen' field must be a sub message of type 'Time'"
        self._last_seen = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value
