# Question 8: Create a program that calculates the shipping cost for an online purchase. Ask
# the user for the total purchase amount and apply the following rules:
#  If the total is $50 or more, provide free shipping.
#  If the total is less than $50, charge a $5 shipping fee.
x=int(input("enter the total purchase amount"))
if x>=50:
    print(f"total amount is {x}")
else:
    T=x+5
    print(f"total amount is {T}")