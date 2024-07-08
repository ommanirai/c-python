"""
logical operator in python
1. logical and(and)
condtion1   condition2      result(condition1 and condition2)
T           T               T and T => T
T           F               F
F           T               F
F           F               F

2. logical or(or)
condtion1   condition2      result(condition1 or condition2)
T           T               T or T => T
T           F               T
F           T               T
F           F               F

3. logical not(not)
condition1    result(not condition)
T              not T => False
F              not F => True


"""
number1 = 23
number2 = 23
result1 = number1 == 23 # True
result2 = number2 == 23 # True
net_result = result1 and result2 # True and True
print(net_result) # True
print(number1 == 23 and number2 == 23)
