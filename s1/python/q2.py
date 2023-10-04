# Q. Create a string from an input string where all occurence of the 1st character is resplaced with '&' except first character

str=input("Enter a string: ")
result=str[0]+str[1:].replace(str[0],'&')
print("The new string is",result)