def count(arr):
    i = 0
    for i in range(0,len(arr)):
        a = arr[i]//10
        b = arr[i]%10
        if a == b :
            arr[i] = 0
    return arr

arr = [int(item) for item in input().split()]
print('Before :',arr)
new_arr = count(arr)
#print('After :',new_arr)
count = 0
for item in new_arr:
    if item > 0:
        count += 1
print('Count :',count)

