#include<iostream>
#define N 8
using namespace std;

void printSol(int a[N][N]){
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

bool isSafe(int x, int y, int a[N][N]){
    return ( x >= 0 && x < N && y >=0 && y < N && a[x][y]==-1);
}

bool helper(int x, int y, int move, int a[N][N], int xMove[N], int yMove[N]){
    int next_x,next_y;
    if (move == N*N)
        return true;

    for(int i=0; i<N; ++i){
        next_x = x + xMove[i];
        next_y = y + yMove[i];
        
        if(isSafe(next_x,next_y,a)){
            a[next_x][next_y] = move;
            
            if(helper(next_x,next_y,move+1,a,xMove,yMove) == true)
                return true;
            else
                a[next_x][next_y] = -1; // backtracking
        }
    }
    return false;
}

bool solve(){
    int a[N][N];

    for(int i=0; i<N; ++i)
        for(int j=0; j<N; ++j)
            a[i][j] = -1;
        
    int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };

    a[0][0] = 0;

    if(helper(0,0,1,a,xMove,yMove) == false){
        cout<<"No solution"<<endl;
        return false;
    }
    else
        printSol(a);
    return true;
}

int main(){
    solve();

    return 0;
}