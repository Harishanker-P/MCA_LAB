# write a function that count the number of strings where string length is 2 or more and the first and last characters are same

def countStr(s):
    count=0
    for i in s:
        if len(i)>=2 and i[0]==i[-1]:
            count+=1
    print('The number of strings ',count)

str=input("Enter any sentence:").split()
countStr(str)