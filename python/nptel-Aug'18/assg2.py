def wellbracketed(s):
    depth = 0
    for i in range(0,len(s)):
        if s[i] == '(':
            depth += 1
        elif s[i] == ')':
            if depth > 0:
                depth -= 1
            else :
                print('False')
    return depth == 0
s = input()
wellbracketed(s)
