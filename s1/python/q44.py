#reverse a string using recursion

def rev(str):
    if not len(str):
        return ''
    else:
        return str[-1]+rev(str[:-1])

ip=input("Enter a string: ")
print('Result :',rev(ip))