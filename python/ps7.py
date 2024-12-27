# Question 7: Create a program that asks the user to input the lengths of the sides of a triangle
# and checks if it's a right-angled triangle (Pythagorean Theorem). If it is, print "Right-angled
# Triangle," otherwise, print "Not a Right-angled Triangle.
x=int(input("enter the 1st side"))
y=int(input("enter the 2nd side"))
z=int(input("enter the 3rd side"))
if z*z==x*x+y*y or x*x==y*y+z*z or y*y==x*x+z*z:
    print("Right_angled Triangle")
else:
    print("Not a Right-angled Triangle")