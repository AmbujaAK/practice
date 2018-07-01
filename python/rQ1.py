arr = [int(item) for item in input().split()]
new_arr = []
for item in arr :
    bin = format(item,'b')
    bin = str(bin)
    l = []
    #l = [l.append(item) for item in bin]
    #print(bin)
    for item in bin:
        l.append(item)
    s = sum(l)
    
