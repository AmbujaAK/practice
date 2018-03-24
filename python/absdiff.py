print('Enter the array :')
lst = [int(item) for item in input().split()]
print('Enter the X value :')
x = int(input())

new_lst = [abs(x-item) for item in lst]
print('List 1 :',lst)
print('List 2 :',new_lst)

dic = {}
for i,j in zip(lst,new_lst):
    dic.keys() = i
    dic.values() = j
print(dic)
