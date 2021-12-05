# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/RobotCommands.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotCommands(type):
    """Metaclass of message 'RobotCommands'."""

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
                'message_info.msg.RobotCommands')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_commands
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_commands
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_commands
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_commands
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_commands

            from message_info.msg import RobotCommand
            if RobotCommand.__class__._TYPE_SUPPORT is None:
                RobotCommand.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCommands(metaclass=Metaclass_RobotCommands):
    """Message class 'RobotCommands'."""

    __slots__ = [
        '_header',
        '_is_yellow',
        '_commands',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'is_yellow': 'boolean',
        'commands': 'message_info/RobotCommand[16]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['message_info', 'msg'], 'RobotCommand'), 16),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.is_yellow = kwargs.get('is_yellow', bool())
        from message_info.msg import RobotCommand
        self.commands = kwargs.get(
            'commands',
            [RobotCommand() for x in range(16)]
        )

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
        if self.header != other.header:
            return False
        if self.is_yellow != other.is_yellow:
            return False
        if self.commands != other.commands:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

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
    def commands(self):
        """Message field 'commands'."""
        return self._commands

    @commands.setter
    def commands(self, value):
        if __debug__:
            from message_info.msg import RobotCommand
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
                 len(value) == 16 and
                 all(isinstance(v, RobotCommand) for v in value) and
                 True), \
                "The 'commands' field must be a set or sequence with length 16 and each value of type 'RobotCommand'"
        self._commands = value
