# Q. Count the number of words in a line of text 


txt=input("Enter a text: ")

#spliting the input string into word based on space
words=txt.split()

print("The number of words in the input string is ",len(words))