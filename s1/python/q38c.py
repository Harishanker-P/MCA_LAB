#c.To remove strings with length<5 from a list of strings

ip=input("Enter a sentence: ").split()

result=list(filter(lambda x:len(x)>=5,ip))

print("list after removing is strings with length <5 ",result)

