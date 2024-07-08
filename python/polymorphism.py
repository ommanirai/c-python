# polymorphism
# method overriding
class Mother():
    address = 'pkr'
    def motherDetails(self):
        print("mother name: geeta")
    
    def display(self): 
        print("display method from Mother class")

class Child(Mother):
    def childDetails(self):
        print("child name is: sajal")
        
    def display(self):
        super().display()
        print("display method from Child class")

c = Child()
c.display()