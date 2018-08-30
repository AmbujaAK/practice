def descending(l):
    if len(l) == 0:
        return True
    new_list = sorted(l)
    new_list.reverse()

    for i in range(len(l)):
        if l[i] != new_list[i]:
            return False
    return True

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

def transpose(m):
    mat = [[m[j][i] for j in range(len(m))] for i in range(len(m[0]))]
    return mat