x=int(input("enter n"))
even=[]
odd=[]
for i in range(1,x+1):
    if (i%2==0):
        even.append(str(i))
    else:
        odd.append(str(i))
print(even)
print(odd)
even1='-'.join(even)
odd1=','.join(odd)
print(even1)
print(odd1)
