# write a program to demonstrate AssertError in Python for negative input
try:
    num=int(input("Enter any number: "))
    assert num>0,"Error:Negative input"
    print(num)
except AssertionError as ae:
    print(ae)
