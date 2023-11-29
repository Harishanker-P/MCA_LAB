# write a program that accepts an interger from user and raise value error with argument 'Abnormal Condition' if the reading is not within 90 - 120.
try:
    num=int(input("Enter a number: "))
    if num<=90 or num>=120:
        raise ValueError("Abnormal Condition")
    print(num)
except ValueError as e :
    print(e)

