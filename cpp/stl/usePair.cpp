#include<iostream>
#include<utility>
using namespace std;

int main(){
  pair<int,char> p1,p2;
  p1 = make_pair(1,'a');
  p2 = make_pair(2,'b');

  cout<<p1.first<<" "<<p1.second<<endl;
  cout<<p2.first<<" "<<p2.second;
}
