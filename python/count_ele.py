from itertools import groupby

arr = [int(item) for item in input().split()]
arr_s = arr.sort()
arr_new = [len(list(group)) for key, group in groupby(arr_s)]
print('Original list :',arr)
print('Sorted list :',arr_s)
print('New list :',arr_new)

