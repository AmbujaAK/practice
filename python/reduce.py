from functools import reduce

arr = [int(item) for item in input().split()]

print(reduce((lambda x,y: x-y),arr))


##### reduce #####
'''
At each step, reduce passes the current product or division,
along with the next item from the list, to the passed-in lambda function.
By default, the first item in the sequence initialized the starting value.
'''

s = 'Hello this is ambuja'
arr = s.split()
print(arr)
print(reduce((lambda x,y:x+' '+y),arr))
print(' '.join(arr))
