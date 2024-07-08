# class Item():
#     name = 'mobile'
#     price = 232
#     def displayItem(self):
#         print("display item details")

# obj = Item()
# print(obj.name)
# print(obj.price)
# obj.displayItem()

'''
inheritance
types:
1. single level inheritance
2. multiple inheritance
3. multi level inheritance

'''
# single level inheritance
class School():
    name = 'vedu'
    location = 'kumaripati'
    def displayDetails(self):
        print("nice one")
        
class Five(School):
    def five(self):
        print("hi from class five")

class Ten(School):
    def ten(self):
        print("hi from class ten")
        
school = School()
f = Five()
t = Ten()
t.displayDetails()
print(t.name, t.location)
# print(school.name)
# print(school.location)
# school.displayDetails()
# school.five()
# f.five()
print(f.name)
f.displayDetails()
