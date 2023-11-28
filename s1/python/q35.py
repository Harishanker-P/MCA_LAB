# write a program that accepts full name and display the reverse order of words wth space between them.


def rev(name):
    for letter in name[::-1]:
        print(letter,end=" ")


name=input("enter your name")
rev(name)

