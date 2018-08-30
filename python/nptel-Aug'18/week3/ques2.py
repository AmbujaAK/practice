def valley(l):
    if len(l) == 1:
        return False
    flag = 0
    for i in range(len(l)-1):
        if l[i] > l[i+1]:
            pass
        else:
            flag = 1
        #print(i)
        if flag == 1:
            if l[i] < l[i+1]:
                pass
            else:
                return False
    return True

l = [int(i) for i in input().split()]

print(valley(l))