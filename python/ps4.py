# Question 4: Create a program that simulates a simple ATM machine. Ask the user for their
# account balance and then allow them to withdraw money or check their balance. Ensure that
# the user cannot withdraw more than their account balance.
x=int(input("enter total account balance"))
y=int(input("enter withdrawl amount"))
if y>=x:
    print("withdrawl is not possible")
else:
    print("check withdrwl")