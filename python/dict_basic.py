#wap to create a dictonary and insert n no. as a key and there square as value
#n=int(input("enter n"))
#dict={}
#for key in range(1,n+1):
   # dict[key]=key*key
#print(dict)
#wap to count tha no. of frequency in your name and the name will be given be user input
name=input("enter your name ")
d={}
for i in name: 
    if i in d:
        d[i]+=1
    else:
        d[i]=1
print(d)
    
    
