def ascending(l) :
    for i in range (0,len(l)-1) :
        if l[i] > l[i+1] :
            return False
    return True

#l = [1,1,3,4,5,6,6,7]
print('Enter the list item :')
l = [int(item) for item in input().split()]
print(ascending(l))
