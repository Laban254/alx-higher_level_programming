#!/usr/bin/python3
"""This module contains a class to serve as base for other classes"""
import json
import csv


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

    def from_json_string(json_string):
        """json string to dictionary"""

        if json_string is None or json_string is []:
            return []
        return json.loads(json_string)

    @staticmethod
    def create(cls, **dictionary):
        """"returns an instance with
        all attributes already set"""

        if cls.__name__ == 'Rectangle':
            a = cls(1, 1)
        if cls.__name__ == 'Square':
            a = cls(1)
        a.update(**dictionary)
        return a

    @classmethod
    def save_to_file(cls, list_objs):
        """Write the JSON serialization of a list of objects to a file.
        Args:
            list_objs (list): A list of inherited Base instances.
        """
        filename = cls.__name__ + ".json"
        with open(filename, "w") as jsonfile:
            if list_objs is None:
                jsonfile.write("[]")
            else:
                list_dicts = [o.to_dictionary() for o in list_objs]
                jsonfile.write(Base.to_json_string(list_dicts))

    @staticmethod
    def from_json_string(json_string):
        """
            Write Json Representation of String
        """
        if not json_string:
            return []
        return json.loads(json_string)

    @classmethod
    def create(cls, **dictionary):
        """Return a class instantied from a dictionary of attributes.
        Args:
            **dictionary (dict): Key/value pairs of attributes to initialize.
        """
        if dictionary and dictionary != {}:
            if cls.__name__ == "Rectangle":
                new = cls(1, 1)
            else:
                new = cls(1)
            new.update(**dictionary)
            return
