def update_list(arr,i,b):
    #print(arr)
    if arr[i-1] <= 1:
        arr[i-1] = b
        #arr.insert(i-1,b)
    return arr

def mk_list(arr):
    for i in range(0,26):
        arr.append(0)
    return arr

def print_ans(arr):
    s = ' '.join(str(e) for e in arr)
    return s

def convert(item):
    if item == 1:
        return 'a'
    elif item == 2:
        return 'b'
    elif item == 3:
        return 'c'
    elif item == 4:
        return 'd'
    elif item == 5:
        return 'e'
    elif item == 6:
        return 'f'
    elif item == 7:
        return 'g'
    elif item == 8:
        return 'h'
    elif item == 9:
        return 'i'
    elif item == 10:
        return 'j'
    elif item == 11:
        return 'k'
    elif item == 12:
        return 'l'
    elif item == 13:
        return 'm'
    elif item == 14:
        return 'n'
    elif item == 15:
        return 'o'
    elif item == 16:
        return 'p'
    elif item == 17:
        return 'q'
    elif item == 18:
        return 'r'
    elif item == 19:
        return 's'
    elif item == 20:
        return 't'
    elif item == 21:
        return 'u'
    elif item == 22:
        return 'v'
    elif item == 23:
        return 'w'
    elif item == 24:
        return 'x'
    elif item == 25:
        return 'y'
    elif item == 26:
        return 'z'
inp = input()
arr = []
arr = mk_list(arr)
z,i = 0,0
for i in range(0,len(inp)):
    #if inp[i] != '(' or inp[i] = '#' or inp[i] = ')':
    if inp[i] == '(':
    	if inp[i-1] != '#':
            a = inp[i-1]
            ab = convert(int(a))
            b = inp[i+1]
            #print(ab*int(b),end=' ')
            #print(arr)
            update_list(arr,int(a),int(b))
    elif inp[i] == '#':
        x = inp[i-2]
        y = inp[i-1]
        z = int(x)*10 + int(y)
        zz = convert(int(z))
        size = inp[i+2]
        #print('...',zz,size)
        #print(zz*int(size),end=' ')
        update_list(arr,int(z),int(size))
        #if inp[i+2] != '(' or inp[i+1] != '(' or inp[i+1] != '#' or inp[i+2] != '#':
    elif inp[i] == ')':
    	print()
    else :
        if inp[i] != '(':
            t1 = inp[i]
            print(t1)
            alpha = convert(int(t1))
            print(alpha)
            size = 1
            update_list(arr,int(t1),int(size))
        elif inp[i] != ')':
            t2 = inp[i]
            print(t2)
            alpha = convert(int(t2))
            print(alpha)
            size = 1
            update_list(arr,int(t2),int(size))
        elif inp[i] != '#':
            temp = inp[i]
            print(temp)
            alpha = convert(int(temp))
            print(alpha)
            size = 1
            update_list(arr,int(temp),int(size))


ans = print_ans(arr)
print(ans)
#print(z)
