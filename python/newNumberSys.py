'''
num = int(input())
i = 0
while(1):
    if num > 3**i:
        i += 1
    else:
        print(i)
        break
'''
from math import floor,log
print(floor(log(int(input()))/log(3))+1)
