# Q. print out all colours from colour list 1 not contained in color list 2.
c1=input("Enter some colors seperated by comas(1): ").split(',')
c2=input("Enter some colors seperated by comas(2): ").split(',')

print("color list 1:",c1)
print("color list 2:",c2)
print("colors in list 1 only:",list(set(c1)-set(c2)))