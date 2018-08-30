def transpose(m):
    mat = [[m[j][i] for j in range(len(m))] for i in range(len(m[0]))]
    return mat

m = [[1,4,9],[1,2,3]]
print(transpose(m))
