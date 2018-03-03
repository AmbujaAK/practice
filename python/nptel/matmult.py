def matmult(m1,m2) :
    row = len(m1)
    col = len(m2[0])
    result =[[0 for i in range(col)] for j in range(row)]

    for i in range(len(m1)) :
        for j in range(len(m2[0])) :
            for k in range(len(m2)) :
                result[i][j] += m1[i][k] * m2[k][j]
    return result
def printMatrix(r,c) :
    print('-----Matrix-----')
    a = []
    for i in range(0, r) :
        for j in range(0,c) :
            a.append(int(input()))
if __name__ == '__main__':
    print('Enter the two matrix :')
    print('Enter row and column :')
    r,c = int(input()),int(input())
    matmult()
