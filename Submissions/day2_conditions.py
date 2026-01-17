#Day 2: Conditions (Decision Making)

# Even or Odd
n = int(input("Enter a number: "))

if n % 2 == 0:
    print("Even")
else:
    print("Odd")
# Voting eligibility
age = int(input("Enter age: "))

if age >= 18:
    print("You can vote")
else:
    print("You cannot vote")
# Largest of two numbers
x = int(input("Enter first number: "))
y = int(input("Enter second number: "))

if x > y:
    print(x, "is greater")
else:
    print(y, "is greater")
# Bonus: Simple Login Check 
pwd = input("Enter password: ")

if pwd == "1234":
    print("Login successful")
else:
    print("Wrong password")
