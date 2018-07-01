#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n,num;
  vector<int> v;
  vector<int> :: iterator i;

  for(int i=1; i<=10; i++){
    cin>>num;
    v.push_back(num);
  }
  for(i = v.begin(); i != v.end(); ++i)
    cout<<*i<<" ";
}
