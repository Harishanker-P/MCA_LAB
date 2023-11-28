# Q. Evaluate using conditional statement

# b)check whether an item is available in a list and return 'AVAILABLE' OR 'NOT AVALIABLE' appropriately.

ip=input("Enter a list of numbers:").split()
item=input("Enter a item: ")
print("AVAILABLE") if (item in ip) else print("NOT AVAILABLE")