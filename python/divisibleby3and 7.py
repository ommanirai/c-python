
  
n = int(input("Enter the first number (n): "))
a = int(input("Enter the second number (a): "))
b = int(input("Enter the third number (b): "))
if n % a == 0 and n % b == 0:
        print("It is divisible by both")
elif n % a == 0:
        print("Divisible by a")
elif n % b == 0:
        print("Divisible by b")
else:
        print("Not divisible by either")





