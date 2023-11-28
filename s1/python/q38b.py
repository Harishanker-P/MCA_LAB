#b.To check the input number is divisible by 5

check=lambda a: not a%5

num=int(input("Enter number: "))
print('{} is divisible by 5 : {}'.format(num,check(num)))