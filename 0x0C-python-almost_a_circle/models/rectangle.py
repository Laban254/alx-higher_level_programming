#!/usr/bin/python3
"class Rectangle inherits from class base"

from models.base import Base

class Rectangle(Base):
    """ """

    def __init__(self, width, height, x=0, y=0, id=None):
        self.width = width
        self.height = height
        self.x = x
        self.y = y
        super().__init__(id)
    
    """getter functions"""
    @property
    def width(self):
        """width getter"""
        return self.__width

    @property
    def height(self):
        """height gettter"""
        return self.__width

    @property
    def x(self):
        """x getter"""
        return self.__x

    @property
    def y(self):
        """y getter"""
        return self.__y
    
    """setter functions"""


    @width.setter
    def width(self, value):
        """sets value for width"""
        self.__width = value

    @height.setter
    def height(self, value):
        """sets value for height"""
        self.__height = value
   
    @x.setter
    def x(self, value):
        """sets value for x"""
        self.__x = value

    @y.setter
    def y(self, value):
        """sets value for y"""
        self.__y = value
