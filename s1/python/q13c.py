#Q. generate a list containg vowels from a word

word=input("Enter a word: ")

result=[v for v in word if v.lower() in "aeiou"]


print(result)
