import random
# computer => 
n = random.randint(1,3)
if n == 1:
    computer = 'r'
elif n == 2:
    computer = 's'
else:
    computer = 'p'
print(f"computer choose:{n} - {computer}")

you = input("your choice: ")
# you = r,s, p

print(f"you choose: {you}")

# None = draw
# false = lose
# true = win

def gameWin(computer, you):
    if computer == you:
       return None
    elif computer == "r":
        #  s, p
        if you == 's':
            return False
        else:
            return True
    elif computer == "p":
        pass
    elif computer == 's':
        pass
    
result = gameWin(computer, you)
if result==None:
    print('tie game')
elif result == True:
    print('game win')
else:
    print("game lose")
    
    





