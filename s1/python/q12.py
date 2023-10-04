# Q. Create a list of first-names. Count the number of names that starts with 'a'.

firstNames=['Anil','John','Ash','Amy','Ron']
count=0
for name in firstNames:
    if name.lower().startswith('a'):
        count+=1
print("There are {} names that starts with 'a'".format(count))
