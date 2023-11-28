# Write a program to find the sum of 1st n whole numbers.

def sum_num(n):
    if n==0:
        return 0 
    else:
        return n+sum_num(n-1)

n=int(input("enter the limit: "))
print('The result is:',sum_num(n-1))
