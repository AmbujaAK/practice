N,Q = map(int, input().split())
A = [int(item) for item in input().split()]
B = A[::]
while(Q):
    k = int(input())
    while k>0:
        s = 0
        a,b = max(A),min(A)
        c = abs(a-b)
        A.sort()
        new_A = A[1:-1]
        new_A.append(c)
        print(new_A)
        k -= 1
        A = new_A
    A = B
    print(sum(A))
    Q -= 1
