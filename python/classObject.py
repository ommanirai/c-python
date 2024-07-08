'''
OOP
object oriented programming
'''
class Animal:
    def __init__(self, name, address):
        self.name = name
        self.address = address
        
    def eat(self):
        print("name and address: ", self.name, self.address)
        
    def fly(self):
        print("fly", self.name)
        
    x =23
    print(x)
   
a = Animal('ram', 'ktm')
print(a.x)
a.eat()