lst = [int(item) for item in input().split()]
c = 0
for item in range(0,len(lst)):
    if lst.count(item) >= 2:
        c += 1
print(c)
