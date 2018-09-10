print('Enter the array :')
lst = [int(item) for item in input().split()]
print('Enter the X value :')
x = int(input())

new_lst = [abs(x-item) for item in lst]
print('List 1 :',lst)
print('List 2 :',new_lst)

dic = {}
for i,j in zip(lst,new_lst):
    dic[i] = j

#del dic[1]
list1 = dic.keys()
list2 = dic.values()

print(dic)
print(list1)
print(list2)