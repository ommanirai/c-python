'''
dictionary
ordered
mutabel(update/edit)
do not allow duplicate

key, value
'''
a = {
    'name':'ram',
    'address':{
        "tempAddress":"ktm",
        "permanentAddress":"pkr"
        },
    "email":"ram@gmail.com",
    "email":"hari@gmail.com"
}
# add = a["address"]
# print(add['tempAddress'])

# print(a['address']['tempAddress'])

# for item in a:
#     print(a[item])
# for v in a.values():
#     print(v)
    
# for v in a.keys():
#     print(v)


# a['name'] = "shyam"
# a['phone']= '928323423'
# a.update({
#     "status":"active"
# })
# a.update({
#     "address":"pokhara"
# })

# print(a["address"])
# a.pop("name")

# print(a)

num = {
    "class1":65,
    "class2":22,
    'class3':7
}
sum = 0
for n in num.values():
    #print(a)
    sum += n
print(sum)


# x = num["class1"]
# y = num["class2"]
# z = num["class3"]
# print(x + y + z)


a=[1,2,3,4,5,6]
a = []
for i in a:
        pass






for num in range(1,7):
    if num % 2 !=0:
        print(num)
 
