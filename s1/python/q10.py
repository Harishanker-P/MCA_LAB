# Q Create a list of colours from comma sepertated list of color names entered by the use print alternate colors

# total number of colors
n=int(input("Enter the limit: "))
# inputing n color to a colors list
colors=[]
for _ in range(n):
    color=input("Enter a color: ")
    colors.append(color)
for i in range(0,len(colors),2):
    print(colors[i])