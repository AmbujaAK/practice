# To print the given number is a sum of two square numbers.

from math import sqrt
from math import pow

def sumofsquares(m):
    if m < 0:
        print('False')
    for i in range(1,int(sqrt(m))+1):
        for j in range(1,int(sqrt(m))+1):    
            val = pow(i,2) + pow(j,2)
            if val == m:
                print('True')
            elif val > m :
                break
    print('False')
n = int(input())
sumofsquares(n)
