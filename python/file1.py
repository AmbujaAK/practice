list1 = [int(item) for item in input().split()]
print('Enter the key :')
key = int(input())

count = 0
while key in list1 :
    if key == list1[count] :
        print( 'At index : ',count)
        break
    else :
        count += 1
else :
    print('Not present')
