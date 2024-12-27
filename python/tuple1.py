#write a program to take your name insert all the character in tuple
t=input("enter your name")
n=tuple(t)
print(n)
res=()
for i in t:
    res=res+tuple(i)
print(res)