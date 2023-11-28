# Write a program find the sum of digits

def sum(num):
    if not num//10:
        return num
    else:
        return num%10+sum(num//10)
num=int(input("Enter the number: "))
print("The sum is",sum(num))
