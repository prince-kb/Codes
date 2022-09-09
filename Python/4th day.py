# 1>>
'''
string = input("Enter string:")
vowels = 0
for i in string:
    if(i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U'):
        vowels = vowels+1
print("Number of vowels are:",vowels)
'''
# 2>>
'''
string = input ("Enter the string to check if it is a palindrome: ")
string = string.casefold ()
reverse_string = reversed (string)

if list(string) == list(reverse_string):
    print ("The string is a palindrome.")
else:
    print ("The string is not a palindrome.")
'''
# 3>>
'''
str = input("Enter a string: ")
print(str[:-1].replace(str[len(str)-1], "*",) + str[len(str)-1])
'''
# 4>>
'''
string=input("Enter string: ")
word=input("Enter word: ")
a=[]
count=0
a=string.split(" ")
for i in range(0,len(a)):
      if(word==a[i]):
            count=count+1
print("Count of the word is:",count)
'''
# 5>>
'''
string=input("Enter string: ")

subs=[]
for i in range(len(string)):
    for j in range(i+1,len(string)+1):
        subs.append(string[i:j])
print(subs)
'''
# 6>>

str1=input("Enter string1: ")
str2=input("Enter string2: ")
sorted_str1=sorted(str1)
sorted_str2=sorted(str2)
if((sorted_str1)==(sorted_str2)):
    print("The given string is anagrams")
else:
    print("The given string is not anagrams")

