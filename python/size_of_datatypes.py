import sys

# Integer
print(f"Size of integer: {sys.getsizeof(int)} bytes")

# Float
float_var = 3.14
print(f"Size of float: {sys.getsizeof(float_var)} bytes")

# String
string_var = "Hello, World!"
print(f"Size of string: {sys.getsizeof(string_var)} bytes")

# List
list_var = [1, 2, 3, 4, 5]
print(f"Size of list: {sys.getsizeof(list_var)} bytes")

# Dictionary
dict_var = {"key1": "value1", "key2": "value2"}
print(f"Size of dictionary: {sys.getsizeof(dict_var)} bytes")

# Tuple
tuple_var = (1, 2, 3)
print(f"Size of tuple: {sys.getsizeof(tuple_var)} bytes")

# Set
set_var = {1, 2, 3}
print(f"Size of set: {sys.getsizeof(set_var)} bytes")
c=ord(" ")
print(c)
