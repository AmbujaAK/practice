#include <iostream>
#include <vector>
#define V 4
using namespace std;

void printSol(vector<int> color){
    
}

bool graphColoringUtil(vector<vector<int>> graph, int m, vector<int> color, int v){

}

bool graphColoring(vector<vector<int>> graph, int m){
    vector<int> color(V,0);

    if (graphColoringUtil(graph, m, color, 0) == false){
        cout<<"\nSolution doesn't exit";
        return false;
    }
    printSol(color);
    return true;
}

int main(){
    
    vector<vector<int>> graph;
    for (int i=0; i<V; i++){
        vector<int> row;
        for (int j=0; j<V; j++){
            cin>>row[i];
        }
        graph.push_back(row);
    }
    int m = 3;
    
    graphColoring(graph, m);

    return 0;
    
}