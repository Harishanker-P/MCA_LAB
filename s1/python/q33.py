# Q. Accept the percentage of marks from users and display grade.

percentage=int(input("Enter your percentage: "))
if percentage > 80 :
    print("A")
elif percentage >60:
    print("B")
elif percentage > 40:
    print("C")
else:
    print("Fail!!!")

