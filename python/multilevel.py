# multilevel inheritance in python
class GrandFather():
    address = 'ktm'
    def fatherDetails(self):
        print("father name: Ram")
        
class Mother(GrandFather):
    address = 'pkr'
    def motherDetails(self):
        print("mother name: sita")

class Child(Mother):
    def childDetails(self):
        print("child name is: sujan")

c = Child()
print(c.address)
c.fatherDetails()
c.motherDetails()