
# Write lambda functions to find the areas

#Square
s=int(input("Enter side of the square"))
areaS=lambda side:side*side
print('Area of the square : ',areaS(s))

#Rectangle
l,b=int(input("Enter length:")),int(input("Enter breadth:"))
areaR=lambda l,b:l*b
print('Area of the rectangle : ',areaR(l,b))

# Triangle
areaT=lambda b,h:0.5*b*h

h=int(input("enter the height:"))
bs=int(input("enter the base:"))
print("Area of triagle is:",areaT(bs,h))
