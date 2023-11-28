def search(ls,item):
    count=0
    for x in ls:
        if x == item:
            count+=1
    return count
ls=[1,2,3,4,3,5,2,1]
print(ls)
item=int(input("enter the item to be searched:"))
print("count=",search(ls,item))
