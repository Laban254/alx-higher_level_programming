#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
x = number % 10
if x  > 5:
    print("Last digit of {0} is {1} and is greater than 5".format(number, x))
elif x == 0:
    print("Last digit of {0} is {1} and is 0".format(number, x))
elif 0 != x < 6:
    print("Last digit of {0} is {1} and is less than 6 and not 0".format(number, x))
