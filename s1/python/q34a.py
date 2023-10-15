# Q. Evaluate using conditional statement
# 	a)Check whether a given number is even or odd and return 'even' or 'odd' appropriately.

ip=int(input("Enter a number: "))
if ip==0:
    print("Zero")
elif ip%2==0:
    print("Even")
else:
    print("Odd")