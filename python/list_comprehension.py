#basic list comprehension
basic_list=[x for x in range(1,6)]
print(basic_list)
# list comprehension with condition filter
even_number=[x for x in range(1,11) if x%2==0]
print(even_number)
# list comprehension with multiple comditions(AND)
multiple_condition=[y for y in range(1,11) if y<3 and y%2==0] 
print(multiple_condition)
#list condition with else expresions
else_expression=["even"if x%2==0 else'odd' for x in range(1,6)]
print(else_expression)
#nested list comprehension
nested_list=[[x+y for y in range(3)] for x in range(1,4)]
print(nested_list)
#list comprehension with a function call
def square(x):
    return x**2
function_call=[square(x) for x in range(1,6)]
print(function_call)
