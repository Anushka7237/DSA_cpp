# Question 9: Write a program that determines the type of a triangle based on the lengths of its
# sides. Ask the user for the lengths of three sides and classify the triangle as "Equilateral,"
# "Isosceles," or "Scalene."
x=int(input("enter the 1st side"))
y=int(input("enter the 2nd side"))
z=int(input("enter the 3rd side"))
if x==y==z:
    print("Equilateral triangle")
elif x==y or y==z or z==x:
    print("Isosceles triangle")
else:
    print("Scalene triangle")