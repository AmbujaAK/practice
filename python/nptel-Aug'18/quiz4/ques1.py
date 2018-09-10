def mystery(l):
    if l == []:
        return (l)
    else:
        return (l[-1:] + mystery(l[:-1]))

l = [13,23,17,81,15]
print(mystery(l))