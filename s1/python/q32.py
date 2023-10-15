# Q. Generate a string by combining first two characters and last two characters from an input string if length of input string is 2, then resulting string must be a concatenation of these characters or if length is less than 2 , return an empty string instead.

str=input("Enter a string: ")
result=""
if len(str)==2:
    result=str*2
elif len(str)<2:
    result=""
else:
    result=str[:2]+str[-2:]

print(result)