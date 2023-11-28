# write a function that print all even numbers from a given list in the given oder until you read number 237 or end of the list

def even(ls):
    for number in ls:
        if number ==237:
            break
        elif not number%2:
            print(number)

ip=list(map(int,(input("enter the numbers: ").split())))
even(ip)


