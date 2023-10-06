# Q. Accept a list of charceter and convert them into a string:

limit=int(input("Enter the limit: "))
clist=[]

for _ in range(limit):
    char=input("Enter a chacater: ")
    clist.append(char)
result=""
for char in clist:
    result+=char
print("The string is",result)
