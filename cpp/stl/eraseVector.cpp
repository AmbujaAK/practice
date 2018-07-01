#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
  vector<int>::iterator i;
  for(i=v.begin();i!=v.end();i++)
    cout<<*i<<" ";
}
int main(){
  cout<<"\nEnter the size of vector : ";
  int n;
  cin>>n;
  vector<int> v(n);
  vector<int>::iterator i;
  for(int i=0;i<n;i++)
    cin>>v[i];
  display(v);

  int key;
  cout<<"\nEnter the element to be erased : ";
  cin>>key;
  for(i=v.begin();i!=v.end();i++){
    if(*i == key)
      v.erase(i);
    //i--;
  }
  display(v);
}
