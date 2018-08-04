import sys

'''
# take input in string 
s = input()
print(s)


i = iter(s)
while True:
    try:
        print(next(i))
    except StopIteration:
        sys.exit()

# slice in string
s1 = s[1:3]
print(s1)


# print all sub contiguous substring 
s = input()
size = int(input())
for i in range(len(s)-size+1):
    temp = s[i:i+size]
    print(temp)

# update string 
s = "ambuja"
s = s[:3] + 'U' + s[4:]
print(s)

##### methods 
# Capitalise
print("Enter the string : ")
s = input()
print(s.capitalize())

# center : make the string in center filling char side wise , e.g ****ambuja****
print("Enter the string : ")
s = input()
print(s.center(10,"*"))

# count number of times a substring in string
print("Enter the string : ")
s = input()
print(s.count("abc",0,len(s)))

# decode and encode
print("Enter the string : ")
str = input()
str = str.encode('utf-8','strict')

print("Encoded string : ",str)
print("Decoded string : ", str.decode('utf-8','strict'))

# find
print("Enter the string : ")
s = input()
s = s.find('ambuja',0,len(s))
print(s)

# index
print("Enter the string : ")
s = input()
s = s.index('abc',0,len(s))
print(s)

# isalnum(), isalpha(), isdigit(), islower(), isnumeric(), isspace(), istitle(), isupper()
print("Enter the string : ")
s = input()
print(s.isalnum())

# join 
print("Enter the sequence : ")
lst = list(map(str, input().split()))
print('-'.join(lst))
#print(lst)


# ljust() and rjust
print("Enter the string : ")
s = input()
print(s.ljust(50,'*'))

# max() and min()
print("Enter the string : ")
s = input()
print(max(s))
print(min(s))

# split()
print("Enter the string : ")
s = input()
print(s.split('-'))
'''
# swapcase()
print("Enter the string : ")
s = input()
print(s.swapcase())
