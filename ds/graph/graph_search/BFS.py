from collections import defaultdict
class Graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def addEdge(self,u,v):
        self.graph[u].append(v)

    def BFS(self, s):
        visited = [False]*(len(self.graph))
        queue = []
        queue.append(s)
        visited[s] = True

        while queue:
            s = queue.pop(0)
            print(s),
            for i in self.graph[s]:
                if visited[i] == False:
                    queue.append(i)
                    visited[i] = True

def readMatrix() :
    file = open('F:\\apache\\webapps\\git\\practice\\ds\\file\\textFile\\matrix.txt')
    matrix = []
    for line in file :
        matrix.append(line)
    for item in matrix :
        print(item,end='')

if __name__ == '__main__':
    readMatrix()
    graph = Graph()
    print("Following is Breadth First Traversal (starting from vertex 1)")
    graph.BFS(1)
'''
g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)
g.addEdge(3, 3)
'''
