a = [1,2,3,4,5,6,7]

# map
'''
map(function_name, argument)
'''
def filter_result(num):
    if num%2==0:
        return num
    else:
        return 0

result = list(map(filter_result, a))
res = list(filter(filter_result, a))
print(f"map result: {result}")
print(f"filter result: {res}")