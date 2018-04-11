from math import factorial as fact

def cal(size):
    return fact(size)/(fact(2)*fact(size-2))
a = int(cal(3))
print(a)
