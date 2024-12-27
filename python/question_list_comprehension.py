square=[x**2 for x in range(1,100)]
print(square)
even_no=[x for x in range(1,21) if x%2==0]
print(even_no)
divisible=[x for x in range(1,21) if x%2==0 and x%3==0]
print(divisible)
list=['anushka','dnshika']
upper=[x.upper() for x in list]
print(upper)
first_letter=[i[0] for i in list]
print(first_letter)
pair=[(x,y) for y in range(4,6) for x in range(1,4)]
print(pair)
flatten=[j for i in pair  for j in i]
print(flatten)
print(type(pair))
string='beautiful'
vowels=[i for i in string if i not in 'aeoui']
print(vowels)

