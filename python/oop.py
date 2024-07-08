'''
oop
object oriented programming
'''
class Item:
    # constructor
    def __init__(self, name, price, quantity):
        print("constructor at first")
        self.name = name
        self.price = price
        self.quantity = quantity
    # pass
    # attribute/variable
    # method
    x = 23
    def hi(self):
        # pass
        print(self.name)
    def hello(self):
        pass
    
item1 = Item('phone', 2323, 1)
item2 = Item('laptop', 2323, 1)
item3 = Item('pc', 23, 2)
item1.hi()
item2.hi()
item3.hi()

# item1 = Item()
# item1.hi('ram', 'ktm')
# item1.item_name = 'phone'
# item1.item_price = 2323
# item1.item_quantity = 1
# print(item1.item_name)
# print(item1.x)

# item2 = Item()
# item2.item_name = 'laptop'
# item2.item_price = 2323
# item2.item_quantity = 1
# print(item2.x)
# print(item2.item_name)