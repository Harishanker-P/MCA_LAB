#a.To find largest of two numbers

large=lambda n1,n2:n1 if n1>n2 else n2

n1=int(input("Enter a number: "))
n2=int(input("Enter a number: "))
print('Largest number is ',large(n1,n2))