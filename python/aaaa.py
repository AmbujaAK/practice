print("Enter the domains : ")
domains = input()
print(domains)
pair = domains.split(' ')
print(pair)
dom = pair[1].split('.')
print(dom)
d = []
for i in range(len(dom)):
    str = '.'.join(dom[i:])
    d.append(str)
print(d)
print('-----------------------------')
dic = {}
n = int(input())
for i in range(n):
    key = input()
    val = input()
    dic[key] = val

print(dic)
