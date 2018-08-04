from itertools import zip_longest

# transpose matrix
a1 = [int(item) for item in input().split()]
a2 = [int(item) for item in input().split()]
a3 = [int(item) for item in input().split()]
a4 = [int(item) for item in input().split()]

for i,j,k,l in zip_longest(a1,a2,a3,a4):
    print(i,j,k,l)
