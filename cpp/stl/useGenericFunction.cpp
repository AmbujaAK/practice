#include<iostream>
using namespace std;

template <class X>
X add(X a, X b){
  X c;
  c = a + b;
  return c;
}

int main(){
  int a,b;
  cout<<"Enter two integer numbers : ";
  cin>>a>>b;
  cout<<"Integer sum is :"<<add(a,b)<<endl;

  float x,y;
  cout<<"Enter two float numbers : ";
  cin>>x>>y;
  cout<<"Float sum is :"<<add(x,y)<<endl;

}
