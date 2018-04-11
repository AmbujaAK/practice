def sqr(x): return x**2;

arr = [int(item) for item in input().split()]
arr1 = list(map(sqr,arr))
s = ' '.join(str(s) for s in list(map(sqr,arr)))
print(s)


##############################
###### one line solution #####
##############################
#print(' '.join(str(s) for s in list(map((lambda x: x ** 2),[int(item) for item in input().split()]))))


# transpose matrix
a1 = [int(item) for item in input().split()]
a2 = [int(item) for item in input().split()]
a3 = [int(item) for item in input().split()]
a4 = [int(item) for item in input().split()]

from itertools import zip_longest
for i,j,k,l in zip_longest(a1,a2,a3,a4):
    print(i,j,k,l)
