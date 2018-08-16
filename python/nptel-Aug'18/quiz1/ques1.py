def g(x):
    (q,d) = (1,0)
    while q <= x:
        (q,d) = (q*10,d+1)
    return d

ans = g(31415927)
print(ans)
