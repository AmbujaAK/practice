def findFact(num) :
    if num == 1:
        return 1
    else :
        return (num * findFact(num-1))

print('Enter the number')
num = int(input())
sum = 0
for i in range(1,num+1):
    sum = sum + findFact(i)
    #print("%d! = %d " % (i,findFact(i)))
print("Sum is %d" % (sum))
