print('Enter the size of array')
sz = int(input())
print('Enter the elements of Array :')
arr = []
for item in range(0,sz) :
    arr.append(int(input()))

print('List is :',arr)
sub_arr = []
i,j,k,size = 0,2,0,2
'''
while size < len(arr) :
	sub_arr=arr[i:j]
	size += 2
'''	
for i in range(0,sz) :
    if arr[i] %2 == 0:
        arr[i] = 1
    else :
        arr[i] = -1

print('New Array :',arr)

item,index = 0,0
sum,i = 0,0
while item < len(arr):
    sum += arr[i]
    print('Sum :',sum)
    if sum <= -1 or sum >= 1:
        index = i+1
        break
    item += 1
print('Index :',index)

