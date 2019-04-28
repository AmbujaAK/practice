
print('Enter the size of matrix :')
s = int(input())
print()
mat = []
'''
for row in range(0,s):
    for col in range(0,s):
        #mat.append(int(input()))
        #mat = [int(item) for item in input().split()]
    print()
'''
# take input as a matrix
x = []
for i in range(0,s):
    mat = [int(col) for col in input().split()]
    x.append(mat)

print(x)
# print matrix in 2-D
print('\nGiven Matrix is :')
for row in range(len(x)) :
    for col in range(len(x[row])):
        print(x[row][col],end=' ')
    print()

#print('Value at index(2,2) is : ',mat[1][1])
