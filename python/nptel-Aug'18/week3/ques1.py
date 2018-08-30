def descending(l):
    if len(l) == 0:
        return True
    new_list = sorted(l)
    new_list.reverse()

    for i in range(len(l)):
        if l[i] != new_list[i]:
            return False
    return True

l = [int(i) for i in input().split()]

print(descending(l))