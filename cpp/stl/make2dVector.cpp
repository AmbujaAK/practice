#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<vector<int>> matrix;
  int r,c;
  cin>>r>>c;
  for(int i=0;i<r;++i){
    vector<int> row;
    for(int j=0; j<c; ++j){
      int val;
      cin>>val;
      row.push_back(val);
    }
    matrix.push_back(row);
  }

  cout<<"vector's are :"<<endl;
  for(int i=0; i<r;++i){
    for(int j=0; j<c;++j){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}
