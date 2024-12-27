#write a function that takes a string as input and return the string with 
#all vowels converted to uppercase and all consonants converted to lowercase
def convert_string(input_string):
    vowels = "aeiouAEIOU"
    result = ""

    for char in input_string:
        if char in vowels:
            result += char.upper()  
        elif char.isalpha():  
            result += char.lower()  
        else:
            result += char 

    return result
input_string = str(input("enter statement"))
output_string = convert_string(input_string)
print(output_string)  
