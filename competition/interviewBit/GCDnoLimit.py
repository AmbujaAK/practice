def GCD(k,m):
    if m==0:
        return k
    else:
        return GCD(m,k%m)

def P(m):
    ans = 1
    k = 1
    while k <= m:
        if GCD(k,m) == 1:
            ans *= k
        k += 1
    return (ans % m)

def F(A):
    ans = 0
    i = 1
    while i <= A:
        ans += P(i)
        i += 1
    return ans % 1000000007

A = int(input())
print(F(A))