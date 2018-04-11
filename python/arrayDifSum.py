T = int(input())
d = []
while T:
    m = 0
    sizeK = [int(k) for k in input().split()]
    arr = [int(item) for item in input().split()]
    z = 0
    res = []
    for i in range(0,sizeK[0]):
        for j in range(0,sizeK[0]):
            if i != j :
                res.append(abs((arr[i]**2-arr[j]**2)**sizeK[1]))
    d.append(min(res))
    T -= 1
for item in d:
    print(item)
