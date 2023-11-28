# Write a program to modify a given string by adding 'ls' if it does not begin with ls else return the original string

def modStr(str):
    if str.startswith('ls'):
        return str
    else:
        return 'ls'+str

ip=input("Enter a string: ")
print("Modified String :",modStr(ip))
