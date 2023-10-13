# Q. write a program to determine the frequincey of words in a sentence

sentence=input("Enter any sentence: ").split()
dic={}

for word in sentence:
    if word in dic:
        dic[word]+=1
    else:
        dic[word]=1

print(dic)
