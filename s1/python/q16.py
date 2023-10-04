# Q. Accept a list of numbers seperated by space and find the max and min element

ip =input("Enter a list of number sperated by space : eg(2 3 4 ...): ")

numbers=ip.strip().split(" ")

print("max={} and min={}".format(max(numbers),min(numbers)))
