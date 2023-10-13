# Q. Find palindrome without using if 
str=input("enter a string:")
print("Palindrome:{}".format(bool(str.lower().strip()==str[::-1].lower().strip())))
