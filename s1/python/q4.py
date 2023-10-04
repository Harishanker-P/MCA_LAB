# Q. Create a word from given string by exchanging 1st and last character
str=input("Enter any string:")
result=str[-1]+str[1:-1]+str[0]
print("the new string is",result)