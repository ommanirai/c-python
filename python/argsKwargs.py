'''
*args
**kwargs

'''
# kwargs
def displayDetails(*args,**kwargs):
    # pass
    # print(type(kwargs))
    print(args)
    print(kwargs)
    # for value in kwargs.values():
    #     print(value)
        
displayDetails(1,2,3,4,5,name='ram', address="vedu", phone="9823242323")

# args
# def names(name,*args):
#     # print(name)
#     # print((args))
#     for i in args:
#         print(i)
    
# names('ram', 'shyam', 'hari')