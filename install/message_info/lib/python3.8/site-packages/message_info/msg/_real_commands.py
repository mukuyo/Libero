# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/RealCommands.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RealCommands(type):
    """Metaclass of message 'RealCommands'."""

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
                'message_info.msg.RealCommands')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__real_commands
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__real_commands
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__real_commands
            cls._TYPE_SUPPORT = module.type_support_msg__msg__real_commands
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__real_commands

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RealCommands(metaclass=Metaclass_RealCommands):
    """Message class 'RealCommands'."""

    __slots__ = [
        '_ball_catch',
        '_degree_ball_robot',
    ]

    _fields_and_field_types = {
        'ball_catch': 'int64',
        'degree_ball_robot': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ball_catch = kwargs.get('ball_catch', int())
        self.degree_ball_robot = kwargs.get('degree_ball_robot', float())

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
        if self.ball_catch != other.ball_catch:
            return False
        if self.degree_ball_robot != other.degree_ball_robot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ball_catch(self):
        """Message field 'ball_catch'."""
        return self._ball_catch

    @ball_catch.setter
    def ball_catch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ball_catch' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ball_catch' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ball_catch = value

    @property
    def degree_ball_robot(self):
        """Message field 'degree_ball_robot'."""
        return self._degree_ball_robot

    @degree_ball_robot.setter
    def degree_ball_robot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'degree_ball_robot' field must be of type 'float'"
        self._degree_ball_robot = value
