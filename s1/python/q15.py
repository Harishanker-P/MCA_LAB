# Q. Accept a list of number seperated by ',' and print the even numbers

txt=input("Enter some numbers seperated by coma: ")
numbers=txt.split(",")
for number in numbers:
    if(int(number)%2==0):
        print(number)
