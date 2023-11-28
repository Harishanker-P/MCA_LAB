# write a program to print all factors of a number n

def factors(n):
    for x in range(1,n):
        if not n%x:
            print(x,end=' ')

n=int(input("Enter number: "))
print("The factors are: ")
factors(n)
