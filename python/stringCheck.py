n,q = map(int,input().split())
A = input()
B = input()
for j in range(q):
    i = int(input())
    new = list(B)
    new[i-1] = '1'
    X = "".join(new)
    '''
    if(int(X,2) >= int(A,2)):
        print("YES")
    else:
        print("NO",int(X,2))
    '''
    print('YES' if int(X,2) >= int(A,2) else 'NO')
    B = X
