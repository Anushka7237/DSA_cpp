#---------------------problem-1 by list------------------------------

strings=['ab','ab','abc']
list1=[]
queries=['ab','abc','bc']
i=0
j=0
for i in queries:
    count=0
    for j in strings:
        if j==i:
            count=count+1
    list1.append(count)
print(list1)

#-----------------------problem-1 by dict--------------------------------

def count(strings,queries):
    x={key:0 for key in queries}
    for i in strings:
        x[i]=x[i]+1
    return [i for i in x.values()]
print(count(['ab','ab','abc'],['ab','abc','bc']))

#-----------------------try and except concept----------------------

x=input("enter 1st no.")
y=input("enter 2nd no.")
try:
    z=int(x)/int(y)
    print("ans will be")
except (ZeroDivisionError,ValueError) :
    print("invalid data")
else:
    print(z)
finally:
    print("finally code is excecuted")
                                #or
x=input("enter 1st no.")
y=input("enter 2nd no.")
try:
    z=int(x)/int(y)
    print("ans will be")
except (ZeroDivisionError,ValueError)as msg :
    print(type(msg))
    print(msg)
    print("invalid data")
else:
    print(z)
finally:
    print("finally code is excecuted")

#wap a program to except index and attribute error
mylist=[1,2,3]
j=int(input("enter index"))
string="anushka"
try:
    n=mylist[j]
except IndexError as msg:
    print(type(msg))
    print(msg)
else:
    print(n)
try:
    string.append("t")
except AttributeError as msg:
    print(type(msg))
    print(msg)
finally:
    print("invalid input")

    