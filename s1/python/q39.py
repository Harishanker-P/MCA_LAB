# write a program to find the factorial of a number 

def fact(num):
    if num==0 or num==1:
        return 1
    else:
        return num*fact(num-1)

ip=int(input("Enter a number:"))
print("Factorial of",ip,'is',fact(ip))


