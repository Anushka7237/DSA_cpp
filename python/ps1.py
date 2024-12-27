#Question 1: Write a Python program that takes a user's age as input and then prints whether
# they are eligible to vote (18 years or older) or not.
import sys
x=int(input("enter age"))
if x>=18:
  print("you are eligible to vote")
else:
  print("you are not eligible to vote")