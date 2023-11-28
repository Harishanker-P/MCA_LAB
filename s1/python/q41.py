# write a program to generate n fibonacci numbers using recurison

def fibonacci(n):
    if n==0:return 0
    if n==1:return 1
    else:
        return fibonacci(n-1)+fibonacci(n-2)
    
n=int(input("Enter a number: "))

print('Using recursion',fibonacci(n-1))
