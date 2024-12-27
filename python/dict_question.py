def set_item_price(item_name):
    return shop.get(item_name,"not found")
shop={'mango':500,'apple':5000,'cherry':100,'banana':40,'orange':80,'gauva':50}
item_name=input("enter the fruit")
print(set_item_price(item_name))
for i,j in shop.items():
    print(i,j)
#items
print("student information")
students_detail={'name':'Anushka','age':20,'course':"computer science",'marks':89}
for a,b in students_detail.items():
    print(a,b)
#update
dict1={'name':'ashika','age':15,'course':'cse','marks':56}
dict2={'name':'anshika','age':20,'course':'cse','marks':84}
dict1.update(dict2)
print(dict1)
#setdefault
value=dict1.setdefault('aditi',90)
print(value)
print(dict1)