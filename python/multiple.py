# multiple inheritance
class Father():
    address = 'ktm'
    def fatherDetails(self):
        print("father name: Ram")
        
class Mother():
    address = 'pkr'
    def motherDetails(self):
        print("mother name: sita")

class Child(Mother,Father):
    def childDetails(self):
        print("child name is: sujan")
        
c = Child()
c.fatherDetails()
c.motherDetails()
c.childDetails()
print(c.address)