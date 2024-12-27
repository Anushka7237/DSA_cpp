#-------------------------reading a text from the file
f=open("D:\\file_handling\\abc.txt",'r')
x=f.read()
f.seek(0)
y=f.read(11)
f.seek(0)
z=f.readline()
f.seek(0)
t=f.readlines()
print(x)
print(y)
print(z)
print(t)
f.close()
# # #---------------------------tell method in reading a file
# # y=f.tell()
# # x=f.read()
# # z=f.tell()
# # print(y)
# # print(z)
# # f.close()/
# x=f.read()
# print(x)
# f.close()
# with open("D:\\file_handling\\abc.txt",'r')as t:
#     y=t.read()
#     print(y)
f=open("D:\\file_handling\\number.txt",'r')
x=f.read()
sum=0
for i in x.split():
    sum=sum+int(i)
print(sum)


#  write a program to read the items from the file 'shopping"list.txt,soryt them alphabitically , and print the sorted list

