'''
lamda function in python

'''
def demo(name):
    return name

n = demo('ram')
print(n)

demo = lambda name:name  
result = demo('shyam')
print(result)

cube = lambda num:num * num * num
print(cube(2))