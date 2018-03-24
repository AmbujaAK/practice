from array import array

def dis(arr):
    for i in range(0,len(arr)):
        print(arr[i],end=' ')


arr = array('i',[1,2,3,4])
print('\nThe elements of array is :')
dis(arr)

arr.append(5)
print('\nThe appended elements are :')
dis(arr)

arr.insert(2,0)
print('\nThe inserted elements are :')
dis(arr)

arr.pop()
print('\nThe popped elements are :')
dis(arr)

arr.remove(0)
print('\nThe removed elements are :')
dis(arr)

a3 = arr.index(3)
print('\nThe index of 3 is :', a3)

arr.reverse()
print('\nReverse of array is :')
dis(arr)

