'''
def fact(num):
	return num * fact(num-1)

def cal(n,r):
	return fact(n)/(fact(n-r)*fact(r))
'''
def cal(dis):
	res = 0
	while dis > 0:
		res = res + dis
		dis -= 2
	return res

print('Enter the size of array')
sz = int(input())
print('Enter the elements of Array :')
arr = [int(item) for item in input().split()]

print('List is :',arr)
sub_arr = []

for i in range(0,sz) :
    if arr[i] %2 == 0:
        arr[i] = -1
    else :
        arr[i] = 1

print('New Array :',arr)
sum = 0
a = []
for i in range(0,sz) :
	sum += arr[i]
	a.append(sum)
print('Cum Sum :',a)
'''
print('Minimum is :',min(a))
i = 0
while i >= min(a) :
	print(a.index(i),end=' ')
	i -= 1
'''
i,j = 0,len(a)
count = 0
for i in range(0,len(a)):
	for j in range(i,len(a)):
		if a[i] != a[j] :
			j -= 1
		else :
			count += cal(j-i+1)
			break
	i += 1
print('Count is :',count)
