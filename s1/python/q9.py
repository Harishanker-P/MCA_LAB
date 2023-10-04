# Q. Accept a string and a character from the user and count the occurance of the character in the entered string.
str=input("Enter any string: ")
char=input("Enter a char: ")
count=str.count(char)
print("The occurance of '"+char+"' in",str,"is",count,"times.")