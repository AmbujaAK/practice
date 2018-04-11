def rotate(arr):
    tup = zip(*arr[::-1])
    return [list(item) for item in tup]

#matrix = [[1,2,3],[4,5,6],[7,8,9]]
#print(matrix[1][1])

print("Enter the n,m,f :")
#f = int(input())
n,m,f = map(int,input().split())
mat = [[int(input()) for x in range(n)] for y in range(m)]
#mat = [[1,2,3],[4,5,6],[7,8,9]]
mat1 = list(rotate(mat))
mat2 = list(rotate(mat1))
#print(list(mat))

if f == 0 :
    print(list(rotate(mat2)))
else :
    print(list(rotate(mat)))
