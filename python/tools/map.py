def sqr(x):
    return x**2

arr = [int(item) for item in input().split()]
arr1 = list(map(sqr,arr))
print(arr1)
s = ' '.join(str(s) for s in list(map(sqr,arr)))
s1 = ' '.join(str(x) for x in arr1)
print(s1)


##############################
###### one line solution #####
##############################
#print(' '.join(str(s) for s in list(map((lambda x: x ** 2),[int(item) for item in input().split()]))))
print("One line solution ...")
print(' '.join(str(item) for item in list(map((lambda i:i**2),[int(a) for a in input().split()]))))