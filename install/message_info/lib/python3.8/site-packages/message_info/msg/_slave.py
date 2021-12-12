# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/Slave.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Slave(type):
    """Metaclass of message 'Slave'."""

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
                'message_info.msg.Slave')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__slave
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__slave
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__slave
            cls._TYPE_SUPPORT = module.type_support_msg__msg__slave
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__slave

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Slave(metaclass=Metaclass_Slave):
    """Message class 'Slave'."""

    __slots__ = [
        '_imu_degree',
        '_appear',
        '_camera_degree',
        '_lidar_degree',
        '_find',
        '_touch',
        '_left',
        '_right',
        '_decide',
        '_imu',
    ]

    _fields_and_field_types = {
        'imu_degree': 'double',
        'appear': 'int64',
        'camera_degree': 'int64',
        'lidar_degree': 'double',
        'find': 'int64',
        'touch': 'int64',
        'left': 'double',
        'right': 'double',
        'decide': 'int64',
        'imu': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.imu_degree = kwargs.get('imu_degree', float())
        self.appear = kwargs.get('appear', int())
        self.camera_degree = kwargs.get('camera_degree', int())
        self.lidar_degree = kwargs.get('lidar_degree', float())
        self.find = kwargs.get('find', int())
        self.touch = kwargs.get('touch', int())
        self.left = kwargs.get('left', float())
        self.right = kwargs.get('right', float())
        self.decide = kwargs.get('decide', int())
        self.imu = kwargs.get('imu', int())

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
        if self.imu_degree != other.imu_degree:
            return False
        if self.appear != other.appear:
            return False
        if self.camera_degree != other.camera_degree:
            return False
        if self.lidar_degree != other.lidar_degree:
            return False
        if self.find != other.find:
            return False
        if self.touch != other.touch:
            return False
        if self.left != other.left:
            return False
        if self.right != other.right:
            return False
        if self.decide != other.decide:
            return False
        if self.imu != other.imu:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def imu_degree(self):
        """Message field 'imu_degree'."""
        return self._imu_degree

    @imu_degree.setter
    def imu_degree(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_degree' field must be of type 'float'"
        self._imu_degree = value

    @property
    def appear(self):
        """Message field 'appear'."""
        return self._appear

    @appear.setter
    def appear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'appear' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'appear' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._appear = value

    @property
    def camera_degree(self):
        """Message field 'camera_degree'."""
        return self._camera_degree

    @camera_degree.setter
    def camera_degree(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_degree' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'camera_degree' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._camera_degree = value

    @property
    def lidar_degree(self):
        """Message field 'lidar_degree'."""
        return self._lidar_degree

    @lidar_degree.setter
    def lidar_degree(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lidar_degree' field must be of type 'float'"
        self._lidar_degree = value

    @property
    def find(self):
        """Message field 'find'."""
        return self._find

    @find.setter
    def find(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'find' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'find' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._find = value

    @property
    def touch(self):
        """Message field 'touch'."""
        return self._touch

    @touch.setter
    def touch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'touch' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'touch' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._touch = value

    @property
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left' field must be of type 'float'"
        self._left = value

    @property
    def right(self):
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right' field must be of type 'float'"
        self._right = value

    @property
    def decide(self):
        """Message field 'decide'."""
        return self._decide

    @decide.setter
    def decide(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'decide' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'decide' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._decide = value

    @property
    def imu(self):
        """Message field 'imu'."""
        return self._imu

    @imu.setter
    def imu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imu' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'imu' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._imu = value
