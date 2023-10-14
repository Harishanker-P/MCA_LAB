#Q.  write a program to add "ing" at the end of the string if it already ends with "ing" then add "ly".

str=input("Enter a string: ")
str = str+"ly" if  str.lower().strip().endswith("ing") else str+"ing" 
print(str)
