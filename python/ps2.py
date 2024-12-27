#Question 2: Create a program that checks if a given string is a palindrome (reads the same
#forwards and backward). Print "Palindrome" if it is and "Not a palindrome" if it isn't.
list=[]
x=input("enter the string")
list.append(x)
list1=list[::-1]
if list1==list:
    print("yes,it is palindrome")
else:
    print("no,it is not palindrome")
