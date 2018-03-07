def readMatrix() :
    file = open('textFile/matrix.txt')
    matrix = []
    for line in file :
        matrix.append(line)
    for item in matrix :
        print(item,end='')

if __name__ == '__main__':
    readMatrix()
