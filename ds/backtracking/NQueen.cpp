#include <iostream>
#include <vector>
#define N 4
using namespace std;

void printSol(vector<vector<int>> &board){
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].size(); j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(vector<vector<int>> &board, int row, int col){

    /* Check this row on left side */
    for (int i=0; i<col; i++)
        if(board[row][i])
            return false;
    
    /* Check upper diagonal on left side */
    for (int i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return false;
    
    /* Check lower diagonal on left side */
    for (int i=row, j=col; j>=0 && i<N; i++, j--)
        if (board[i][j])
            return false;
 
    return true;
}

bool solveUtil(vector<vector<int>> &board, int col){
    
    /* if all queens are placed then return TRUE*/
    if (col >= N)
        return true;
    /* check filling queens in all row col by col*/
    for (int i=0; i<N; i++){

        /* if queens can be palced on board[i][col]*/
        if (isSafe(board, i, col)){
            board[i][col] = 1;
            if (solveUtil(board,col+1))
                return true;
            
            board[i][col] = 0; // backtrack
        }
    }
    return false;
}

bool solve(){
    // board initialized with 0
    vector<vector<int>> board(N,vector<int>(N));

    cout<<"\nBefore board : "<<endl;
    printSol(board);

    if (solveUtil(board,0) == false){
        cout<<"\nSolution doesn't exit.";
        return false;
    }
    cout<<"\nAfter board : "<<endl;
    printSol(board);
    return true;
}

int main(){
    solve();

    return 0;
}