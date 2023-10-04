# Q. Accept a file name from user and print extension of that file

fname=input("enter the file name: ")

print("the extention is ."+fname.split('.')[-1])