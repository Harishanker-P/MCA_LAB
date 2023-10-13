# Q. write a program to determine the frequincey of letters in a word

word=input("Enter any word: ")
dic={}

for letter in word:
    if letter in dic:
        dic[letter]+=1
    else:
        dic[letter]=1

print(dic)
