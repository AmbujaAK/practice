#include<iostream>
#define N 4
using namespace std;

void printSol(int a[N][N]){
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

bool isSafe(int maze[N][N], int x, int y){
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return true;
    
    return false;
}

bool helper(int maze[N][N], int x, int y, int a[N][N]){
    if(x == N-1 && y == N-1){
        a[x][y] = 1;
        return true;
    }

    if(isSafe(maze,x,y) == true){
        a[x][y] = 1;

        if(helper(maze,x+1,y,a) == true)
            return true;
        if(helper(maze,x,y+1,a) == true)
            return true;
        
        a[x][y] = 0;
        return false;
    }
    return false;
}

bool solve(int maze[N][N]){
    int a[N][N] = {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };

    if(helper(maze,0,0,a) == false){
        cout<<"No solution"<<endl;
        return false;
    }
    //else
    printSol(a);
    return true;
}

int main(){
    int maze[N][N] = {
        {1,0,0,0},
        {1,1,0,1},
        {0,1,0,0},
        {1,1,1,1}
    };

    solve(maze);

    return 0;
}