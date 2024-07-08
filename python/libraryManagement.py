'''
Library management system
1. Library
    a. displayAvailabel books
    b. borrowBook
    c. return book
2. Student
    a. request book
    b. return book

'''
class Library():
    def __init__(self, bookList):
        self.bookList = bookList
        
    def displayAvailabelBooks(self):``
        print("-----Availabel book in Library-----")
        for book in self.bookList:
            print(book)
            
    def borrowBooks(self, bookName):
        if bookName in self.bookList:
            # if(bookName == book):
            print("book has been issued, please return within 20 days")
            self.bookList.remove(bookName)
        else:
            print("book not availabel")
    
    def returnBook(self, bookName):
        self.bookList.append(bookName)
        print("Thank you returnin book")
        
            
class Student():
    pass

library = Library(["harry potter", 'python', 'c'])
print("all book")
library.displayAvailabelBooks()

library.borrowBooks("c")
print("list after removing book c")
library.displayAvailabelBooks()

library.returnBook("c")
print("after return c")
library.displayAvailabelBooks()
