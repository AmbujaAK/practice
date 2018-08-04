
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
for row in range(0,s):
    mat = [int(col) for col in input().split()]
    #print()

# print matrix in 2-D
print('\nGiven Matrix is :')
for row in mat :
    for col in mat:
        print(col,end=' ')
    print()

#print('Value at index(2,2) is : ',mat[1][1])
