from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def addEdge(self,u,v):
        self.graph[u].append(v)

    def printMatrix(self):
      for i in self.graph:
        for j in self.graph[i]:
          print(self.graph[i][j])
        print()

    def BFS(self, s):
        visited = [False]*(len(self.graph))
        queue = []
        queue.append(s)
        visited[s] = True

        while queue:
            s = queue.pop(0)
            print (s+1,end=' ')

            for i in self.graph[s]:
                if visited[i] == False:
                    queue.append(i)
                    visited[i] = True
        print()

g = Graph()

with open("matrix4.txt") as f:
    content = f.readlines()

content = [x.strip() for x in content]
row=0
for y in content:
    y=y.split(' ')
    col=0
    for z in y:
        if z=='1':
            g.addEdge(int(row),int(col))
        col=col+1
    row=row+1
print('Matrix is :')
#g.printMatrix()

print ("Following is Breadth First Traversal (Implemented in Python)")
s=int(input('Enter Starting Node:'))
g.BFS(s-1)
