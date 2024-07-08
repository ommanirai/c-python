# class
# object
# inheritance
# polymorphism

# user
    # view details
# bank
    # withdraw
    # deposit
    # view balance


class User():
    def __init__(self, name, address, phone):
        self.name = name
        self.address = address
        self.phone = phone
        
    def userdetails(self):
        print("name: ", self.name)
        print("address: ", self.address)
        print("phone: ", self.phone)
        
# u = User('saujan', 'ktm', '98232323')
# u.userdetails()

class Bank(User):
    def __init__(self, name, address, phone):
        super().__init__(name, address, phone)
        self.balance = 0
        
    def deposit(self, amount):
        self.amount = amount
        self.balance = self.balance + self.amount
        print("Your balance has been increased by: ", self.amount)
        print('total amount: ', self.balance)
        
    def withdraw(self, amount):
        self.amount = amount
        if self.balance < self.amount:
            print("insufficient fund || available fund: ", self.balance)
        else:
            self.balance = self.balance - self.amount
            print("Your balance has been reduced by: ", self.amount)
            print('available amount: ', self.balance)
    def viewBalance(self):
        self.userdetails()
        print("actual balance: ", self.amount)
        
b = Bank('ram', 'ktm','8283234')
b.deposit(15000)
b.withdraw(6000)
b.viewBalance()