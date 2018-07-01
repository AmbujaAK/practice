#include<iostream>
#include<vector>

using namespace std;

int main(){
  int N,M;
  vector<vector<char>> vBlock ;
  cin>>N>>M;
  for(int i=0; i<vBlock.size(); i++){
    for(int j=0; j<vBlock[i].size(); j++)
      cin>>vBlock[i][j];
  }
}
