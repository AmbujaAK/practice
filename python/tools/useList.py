import sys

# use iter() and next()
lst = [int(item) for item in input().split()]
print(lst)

'''
# print all elements 
i = iter(lst)
while True :
    try :
        print(next(i),end=' ')
    except StopIteration:
        sys.exit()
'''
############### methods 

# append()
print("Enter the elements in list : ")
n = int(input())
l = []
for item in range(n):
    tmp = int(input())
    l.append(tmp)
print(l)

# count()
print(l.count(1))

# remove()
l.remove(1)
print(l)

# reverse()


# insert()


# pop()


# extend()