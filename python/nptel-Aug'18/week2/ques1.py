# ques 1
def intreverse(n):
    x = n
    ans = 0
    while n > 0:
        r = n%10
        ans = ans * 10 + r
        n = n//10
    l = len(str(x))
    ans = ('%0' + str(l) + 'd') % ans
    return ans

num = intreverse(3000)
print(num)