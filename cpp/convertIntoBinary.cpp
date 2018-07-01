#include<iostream>
#include<stack>
using namespace std;

int main(){
  cout<<"\nEnter any number : ";
  int n;
  cin>>n;
  stack<int> s;
  while(n>0){
    int r = n % 2;
    n = n/2;
    s.push(r);
  }
  while(!s.empty()){
    int a = s.top();
    s.pop();
    cout<<a;
  }
}
