print('Enter the array with positive and negative valuse :')
lst = [int(item) for item in input().split()]
new_lst = []
for item in lst :
    if item < 0 in lst :
        new_lst.append(item)

for item in lst :
    if item >= 0 in lst :
        new_lst.append(item)

print(new_lst)
