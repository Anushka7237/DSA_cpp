# Question 10: Create a program that calculates the discount for a shopping cart. Ask the user
# for the total cost of items in their cart and apply the following discounts:
#  10% discount for totals between Rs 500 and 1000
#  20% discount for totals over Rs 1000
#  No discount for totals under Rs 500
x=int(input("Enter the total cost of items"))
if x<500:
    print(f"total cost is {x}")
elif x>=500 and x<=1000:
    T=x*10/100
    print(f"total cost after 10% discount is {x-T}")
else:
    T=x*20/100
    print(f"total cost after 20% discount is {x-T}")
