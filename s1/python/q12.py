# Q. Create a list of first-names. Count the number of names that starts with 'a'.

limit=int(input("Enter the limit: "))
firstNames=[]
for _ in range(limit):
    fname=input("Enter a first name: ")
    firstNames.append(fname)
count=0
for name in firstNames:
    if name.lower().startswith('a'):
        count+=1
print("There are {} names that starts with 'a'".format(count))
