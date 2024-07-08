"""
identity operator in python
is
is not

"""
# list
a = ["kiwi", "orange", "papaya"]
b = ["kiwi", "orange", "papaya"]
c = a
print(a is not b)
print(b == a) # True
print(c is not a)