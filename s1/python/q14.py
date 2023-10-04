# Q. Accept a string and check wheater it is a palindrome or not


str=input("Enter a string:")

if(str.lower()==str[::-1].lower()):
    print("yes it is palindrome")
else:
    print("No it is not palindrome")
