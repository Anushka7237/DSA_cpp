# Question 5: Write a program that asks the user to enter their age and their gender (M/F). If
# the age is greater than 18 and the gender is "M," print "You are eligible for military service,"
# otherwise, print "You are not eligible for military service."
x=int(input("enter your age"))
y=input("enter your gender")
if x>=18 and y=='M':
    print("You are eligible for military service")
else:
    print("you are not eligible for military service")