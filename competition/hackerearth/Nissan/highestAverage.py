def avg(x):
    x.sort()
    y=[]
    ans=0
    for i in range(0,len(x)):
        ans += x[i]
        y.append(ans/(i+1))
    return y
n = int(input())
x = [int(i) for i in input().split()]
q = int(input())
y = [int(input()) for i in range(0,q)]
z = {}
for i in range(0,len(y)):
    if y[i] in z:
        tmp = z[y[i]] + [i]
        z[y[i]] = tmp
    else:
        z[y[i]] = [i]

a = avg(x)
y.sort()
ans = []
l = 0
for i in y:
    while l<len(a) and a[l]<i:
        l+=1
    if l<len(a) and i<=a[l]:
        ans.append(l)
    if l==len(a):
        if a[l-1]<i:
            ans.append(l)
        else:
            ans.append(l-1)
fans = [0 for i in range(0,q)]
for j in range(len(y)):
    ind = z[y[j]]
    for i in ind:
        fans[i]=ans[j]
for i in fans:
    print(i)