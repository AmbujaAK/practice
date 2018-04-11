N = int(input())
W = [int(item) for item in input().split()]

sum = 0
for item in W:
    sum += item
k = sum/N
count = 0

for item in W:
    if k > item:
        count += 1
if sum%N == 0:
    print(count)
else:
    print('-1')
'''
for i in W:
    if i < 2:
        count += abs(i-2)
print(count)
'''
