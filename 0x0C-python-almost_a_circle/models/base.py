#!/usr/bin/python3
"""This module contains a class to serve as base for other classes"""
import json


class Base:
    """Represents base of all classes created """

    __nb_objects = 0

    def __init__(self, id=None):
        """__init__ base"""

        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries):
        """Returns a JSON string"""

        if list_dictionaries is None or list_dictionaries == []:
            return "[]"
        return json.dumps(list_dictionaries)

        
