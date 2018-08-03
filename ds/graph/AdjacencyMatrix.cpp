#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class AdjacencyMatrix{
    private:
        int n;
        int **adj;
        bool *visited;
    public:
        AdjacencyMatrix(int n){
            this->n = n;
            visited = new bool [n];
            adj = new int* [n];
            for(int i=0; i<n; i++){
                adj[i] = new int [n];
                for(int j=0; j<n; j++)
                    adj[i][j] = 0;
            }
        }

        void addEdge(int from,int to){
            if(from > n || to > n || from < 0 || to < 0)
                cout<<"\nInvalide Edge ";
            else   
                adj[from-1][to-1] = 1;
        }

        void printG(){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++)
                    cout<<adj[i][j]<<" ";
                cout<<endl;
            }
        }
};


int main(){
    int nodes;
    cout<<"\nEnter the number of nodes : ";
    cin>>nodes;
    
    AdjacencyMatrix adj(nodes);
    int max_edges = nodes * (nodes-1);

    for(int i=0; i<max_edges; i++){
        int from,to;
        cin>>from>>to;
        if((from==-1) && (to==-1))
            break;
        adj.addEdge(from,to);
    }
    cout<<"This is the matrix of the given graph "<<endl;
    adj.printG();
    return 0 ;
}