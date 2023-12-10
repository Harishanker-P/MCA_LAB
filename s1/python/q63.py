# Create a package graphics with moudles rectangle and circle with methods to find area and perimeter of respective figures in each spheere with methods to find area and volumes of respective figures in each module. Write programs that finds parameters of figures by different importing statements.
from graphics.circle import *
from graphics import rectangle,circle
from graphics.dgraphics import cuboid,sphere
l=int(input('enter the length of rectangle'))
b=int(input('enter the breadth of rectangle'))
h=b=int(input('enter the height of cuboid'))
rectangle.area(l,b)
rectangle.perimeter(l,b)
cuboid.area(l,b,h)
cuboid.volume(l,b,h)

r=int(input('enter the radius'))
circle.area(r)
circle.perimeter(r)
sphere.area(r)
sphere.volume(r)
