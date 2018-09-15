#include <iostream>
#include <vector>
#define N 9
#define UNASSIGNED 0
using namespace std;

void printSol(vector<vector<int>> &box){
    for (int i=0; i<box.size(); i++){
        for (int j=0; j<box[i].size(); j++)
            cout<<box[i][j]<<" ";
        cout<<endl;
    }
}

/* checking for data in row */
bool UsedInRow(vector<vector<int>> &box, int row, int data){
    for (int col = 0; col < N; col++)
        if (box[row][col] == data)
            return true;
    return false;
}

/* checking for data in column */
bool UsedInCol(vector<vector<int>> &box, int col, int data){
    for (int row = 0; row < N; row++)
        if (box[row][col] == data)
            return true;
    return false;
}

/* checking for data in box */
bool UsedInBox(vector<vector<int>> &box, int boxRow, int boxCol, int data){
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (box[row+boxRow][col+boxCol] == data)
                return true;
    return false;
}

bool isSafe(vector<vector<int>> &box, int row, int col, int data){
    /* check if data is valide for that cell */
    return !UsedInRow(box,row,data) && 
        !UsedInCol(box,col,data) && 
        !UsedInBox(box,row-row%3,col-col%3,data);
}

bool findEmptyCell(vector<vector<int>> &box, int &row, int &col){
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (box[row][col] == UNASSIGNED)
                return true;
    return false;
}

bool solveSudoku(vector<vector<int>> &box){
    
    int row,col;
    // check if there is any 0 in cell , if not return TRUE 
    if(!findEmptyCell(box, row, col))
        return true;
    
    for(int data = 1; data <= 9; data++){
        /* checking the validation of digit on a particular cell */
        if (isSafe(box,row,col,data)){
            
            box[row][col] = data;

            if (solveSudoku(box))
                return true;
            
            /* failuer , try again */
            box[row][col] = UNASSIGNED;
        }
    }
    return false;
}

int main(){
    //vector<vector<int>> box(N,vector<int>(N));
    vector<vector<int>> box;

    for (int i=0; i<N; i++){
        vector<int> row(N);
        for (int j=0; j<N; j++)
            cin>>row[j];
        box.push_back(row);
    }
    cout<<"\nQuestion : "<<endl;
    printSol(box);

    if (solveSudoku(box) == true){
        cout<<"\nSolution : "<<endl;
        printSol(box);
    }else
        cout<<"\nNO SOLUTION"<<endl;
}