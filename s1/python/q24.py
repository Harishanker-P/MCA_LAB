#  Q. Enter two collection of integers
c1=input("Eneter the 1st collectioin of numbers: ").split()

c2=input("Eneter the 2nd collectioin of numbers: ").split()

# a) wheater they are of same length
print("Both collections are same lenth:",len(c1)==len(c2))
# b) wheater they sum to the same value
print("Both collections sum the same value",sum(set(map(int,c1)))==sum(set(map(int,c2))))

# c) wheater any value occur in both

for x in c1:
    if x in c2:
        
