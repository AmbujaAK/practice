arr = [int(item) for item in input().split()]
print(list(filter((lambda x: x > 0), arr)))
a = (1,2,4,6,8,0,10)
b = (2,6,4,-4,0,9,7)
print(list(filter(lambda x: x in a,b)))


########filter#########
# it take two arguments
# one is function and other may be list,tuple (iterable)
