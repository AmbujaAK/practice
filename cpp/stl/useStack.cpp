#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> s){
  cout<<"\ncurrent STACK :";
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
}
int main(){
  stack<int> s;
  int val;
  cout<<"\nEnter the elements of Stack :";
  for(int i=0; i<5; i++){
    cin>>val;
    s.push(val);
  }
  display(s);
}
