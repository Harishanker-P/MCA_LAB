# Q. Accepts a list of words and a number n, print all the words that are longer than n


limit = int(input("Enter the limit: "))
words=[]
for _ in range(limit):
    word=input("Enter a word: ")
    words.append(word)

print("The words list is",words)
n=int(input("Enter the value of n:"))
print("The word longer than {} is".format(n))
for word in words:
    if(len(word)>n):
        print(word)
