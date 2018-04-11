st = input()
arr = []
for i in range(len(st)):
    if st[i] == 'G':
        arr.append('C')
    elif st[i] == 'C':
        arr.append('G')
    elif st[i] == 'T':
        arr.append('A')
    elif st[i] == 'A':
        arr.append('U')
    else :
        arr = []
        print('Invalid Input')
        break
print(''.join(arr))
