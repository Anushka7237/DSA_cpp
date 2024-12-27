#...............problem-1........................................


set1={1,2,3,4}
set2={2,3,6,7}
print(set1)
print(set2)
print(len(set1))
print(len(set2))
print(set1|set2)
print(set1&set2)
print(set1-set2)

#....................problem-2.....................................



my_set=set()
my_set.add(1)
my_set.add(2)
my_set.add(3)
print(my_set)
my_set.remove(2)
print(my_set)

#......................problem-3...................................


list1=list(range(1,11))
print(list1)
set={i for i in list1 if i%2==0}
print(set)