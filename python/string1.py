'''
for i in range(len(ss)):
    print('i' , i)
    diff = (len(ss)-len(s))
    if i > diff:
        sub = ss[i:i+len(s)] + ss[:i-diff]
    else:
        sub = ss[i:i+len(s)]
    print(sub)

'''
from itertools import permutations
#perms = [''.join(p) for p in permutations('stack')]
#perms
def solve(target, source):
    lenT,lenS = len(target),len(source)
    for i in range(lenS):
        substr = ''
        diff = (lenS-lenT)
        if i > diff:
            substr = source[i:i+lenT] + source[:i-diff]
        else:
            substr = source[i:i+lenT]
        print('substr : ', substr)
        '''
        allPerms = [''.join(p) for p in permutations(substr)]
        print (allPerms)
        if target in allPerms:
            return len(allPerms)
        '''
        if i == lenS-1:
            lenT += 1
            i = 0
        if lenT == lenS:
            break
    return -1
ss = 'hackerrank'
s = 'kern'
print(solve(s,ss))