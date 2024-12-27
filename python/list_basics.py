days=list(("monday","tuesday","wednesday","thursday",'friday',"saturday","sunday"))
print(f"the list of days is",days)
print(len(days))
print(f"first and last element of list is",days[0],days[-1])
#slicing in list
print("first three days")
print(days[0:3])
print("last two days")
print(days[-2:])
print("second to last days")
print(days[-6:])
fruits=[]
fruits.append("apple")
fruits.append("banana")
fruits.append("cherry")
more_fruits_containing=["oranga","mango"]
fruits.extend(more_fruits_containing)
print(fruits)