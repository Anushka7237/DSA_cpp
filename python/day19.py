# #-------------------file handling--------------------->
f=open('D:\\file_handling\\abc.txt','w')
#----------------------wap to create three text file in specific folder using file handling------------------>
for i in range(1,4):
    name=input('enter the name:')
    ext=input('enter extension')
    f=open(f'D:\\file_handling\\'+name+ext,'w')
f=open('D:\\file_handling\\abc.txt','w')
print("file.name",f.name)
print("file.mode",f.mode)
print("isfile.readable",f.readable())
print("isfile.writable",f.writable())
print("isfile.closed",f.closed)

#--------------------------different  mode-----------
f.write("anu")
f.close()
f=open('D:\\file_handling\\bcd.txt','w')
y=['a\n','n\n','u\n','s','h','k','a']
f.writelines(y)
f.close()
#--------wap to copy data from text file to another file using file handling-----------
f=open("D:\\file_handling\\abc.txt",'r')
x=f.read()
f=open("D:\\file_handling\\bcd.txt",'w')
f.write(x)

