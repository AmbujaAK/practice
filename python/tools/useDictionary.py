

print("Enter the number of id's : ",end='\n')
id = int(input())

dict = {}
for i in range(id):
    key,val = input().split() 
    dict[key] = val

print(dict)

'''
######### methods
# copy()
tmp = dict.copy()
print(tmp)

# clear()
dict.clear()
print(dict)

# fromkeys()
print("Enter the keys sequence :")
seq = list(map(str, input().split()))
dict = dict.fromkeys(seq,10)
print(dict)
'''
# get()
print(dict.get('1')) 

# items()
print(dict.items())

# keys()
print(dict.keys())

# values()
print(dict.values())

# update()
dict1 = {'9' : 'Aishu'}
dict.update(dict1)
print(dict)
