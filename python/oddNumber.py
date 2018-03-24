lst = []
l = int(input())
r = int(input())
for item in range(l,r+1):
    lst.append(item)
print(lst,end=' ')

for item in lst:
    if item%2!=0:
        print(item)
