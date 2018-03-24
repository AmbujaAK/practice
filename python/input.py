print('\n***HOW TO TAKE INPUT LIKE ARRAY***')
list1 = [int(item) for item in input().split()]

print('List is :',list1)

list1.sort()
print('Sorted array is :', list1)

list1 = list1[1::2]
print('Array step of 2 :',list1)

print('List 1 :')
l1 = [int(item) for item in input().split()]
print('List 2 :')
l2 = [int(item) for item in input().split()]

l3 = []
print('Mixing two array alternatively :')
for i,j in zip(l1,l2):
    l3.append(i)
    l3.append(j)

print('New list is :', l3)
