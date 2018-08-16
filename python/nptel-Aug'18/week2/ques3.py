# ques 3
def isPrime(x):
    if x == 1 :
        return False
    if x == 2:
        return True
    i = 2
    while i < x:
        if x % i == 0:
            return False
        i += 1
    return True

def sumprimes(l):
    sum = 0
    for i in l:
        if i > 0 and isPrime(i) :
            sum += i
    return sum

l1 = [3,3,1,13]
l2  = [2,4,6,9,11]
l3 = [-3,1,6]
print(sumprimes(l3))