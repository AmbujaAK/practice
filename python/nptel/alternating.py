def alternating(l):
    if len(n) > 1 :
        if l[0] > l[1] :
            for i in range(len(n)-1):
                if l[i] == l[i-1] :
                        return False
                if i % 2 == 0 :
                    if l[i] < l[i+1] :
                        return False
        if l[0] < l[1] :
            for i in range(len(n)-1):
                if l[i] == l[i-1] :
                    return False
                if i % 2 == 0 :
                    if l[i] > l[i+1] :
                        return False
    return True

