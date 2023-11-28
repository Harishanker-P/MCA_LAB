# To increment list of integers by 10% if the number is greater than 1000 else by 5%


number=input("Enter numbers: ").split()
numberlist=map(int,number)
newlist=list(map(lambda x: x+x*0.10 if x>1000 else x+x*0.05,numberlist))
print(newlist)
