# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/RobotCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotCommand(type):
    """Metaclass of message 'RobotCommand'."""

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
            module = import_type_support('message_info')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'message_info.msg.RobotCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCommand(metaclass=Metaclass_RobotCommand):
    """Message class 'RobotCommand'."""

    __slots__ = [
        '_robot_id',
        '_vel_surge',
        '_vel_sway',
        '_vel_angular',
        '_kick_power',
        '_chip_enable',
        '_dribble_power',
        '_is_yellow',
        '_finish',
    ]

    _fields_and_field_types = {
        'robot_id': 'int64',
        'vel_surge': 'double',
        'vel_sway': 'double',
        'vel_angular': 'double',
        'kick_power': 'double',
        'chip_enable': 'boolean',
        'dribble_power': 'double',
        'is_yellow': 'boolean',
        'finish': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_id = kwargs.get('robot_id', int())
        self.vel_surge = kwargs.get('vel_surge', float())
        self.vel_sway = kwargs.get('vel_sway', float())
        self.vel_angular = kwargs.get('vel_angular', float())
        self.kick_power = kwargs.get('kick_power', float())
        self.chip_enable = kwargs.get('chip_enable', bool())
        self.dribble_power = kwargs.get('dribble_power', float())
        self.is_yellow = kwargs.get('is_yellow', bool())
        self.finish = kwargs.get('finish', bool())

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
        if self.robot_id != other.robot_id:
            return False
        if self.vel_surge != other.vel_surge:
            return False
        if self.vel_sway != other.vel_sway:
            return False
        if self.vel_angular != other.vel_angular:
            return False
        if self.kick_power != other.kick_power:
            return False
        if self.chip_enable != other.chip_enable:
            return False
        if self.dribble_power != other.dribble_power:
            return False
        if self.is_yellow != other.is_yellow:
            return False
        if self.finish != other.finish:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'robot_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._robot_id = value

    @property
    def vel_surge(self):
        """Message field 'vel_surge'."""
        return self._vel_surge

    @vel_surge.setter
    def vel_surge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_surge' field must be of type 'float'"
        self._vel_surge = value

    @property
    def vel_sway(self):
        """Message field 'vel_sway'."""
        return self._vel_sway

    @vel_sway.setter
    def vel_sway(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_sway' field must be of type 'float'"
        self._vel_sway = value

    @property
    def vel_angular(self):
        """Message field 'vel_angular'."""
        return self._vel_angular

    @vel_angular.setter
    def vel_angular(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_angular' field must be of type 'float'"
        self._vel_angular = value

    @property
    def kick_power(self):
        """Message field 'kick_power'."""
        return self._kick_power

    @kick_power.setter
    def kick_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kick_power' field must be of type 'float'"
        self._kick_power = value

    @property
    def chip_enable(self):
        """Message field 'chip_enable'."""
        return self._chip_enable

    @chip_enable.setter
    def chip_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'chip_enable' field must be of type 'bool'"
        self._chip_enable = value

    @property
    def dribble_power(self):
        """Message field 'dribble_power'."""
        return self._dribble_power

    @dribble_power.setter
    def dribble_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dribble_power' field must be of type 'float'"
        self._dribble_power = value

    @property
    def is_yellow(self):
        """Message field 'is_yellow'."""
        return self._is_yellow

    @is_yellow.setter
    def is_yellow(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_yellow' field must be of type 'bool'"
        self._is_yellow = value

    @property
    def finish(self):
        """Message field 'finish'."""
        return self._finish

    @finish.setter
    def finish(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'finish' field must be of type 'bool'"
        self._finish = value
