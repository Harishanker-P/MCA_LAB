# Q. Create a single string seperated with space from two strings by swapping the charcter at posistion 1
str1=input("Enter the 1st string: ")
str2=input("Enter the 2nd string: ")
result=str2[0]+str1[1:]+" "+str1[0]+str2[1:]
print("The new string is",result)