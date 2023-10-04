# Q Create a list of colours from comma sepertated list of color names entered by the use print alternate colors

# user input
txt=input("Enter a set colors seperated with coma eg(red,blue...): ")

# creating a list of colors for the input
colors=txt.split(",")

#printing alternating colors
for i in range(0,len(colors),2):
    print(colors[i])
