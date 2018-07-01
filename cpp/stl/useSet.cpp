#include<iostream>
#include<set>
//#include<algorithm>
using namespace std;

void display(set<int> s, set<int>::iterator i){
  cout<<"\nCurrent Set :";
  for(i = s.begin(); i != s.end(); ++i){
    cout<<*i<<" ";
  }
}
int main(){
  set<int> s;
  set<int>:: iterator i;
  int val;
  cout<<"Enter the elements of set :";
  for(int i=0; i<5; ++i){
    cin>>val;
    s.insert(val);
  }
  display(s,i);

  cout<<"\n\n***** empty() & clear() *****";
  //s.clear();
  display(s,i);
  if(s.empty())
    cout<<"\nEMPTY";
  else
    cout<<"\nNOT EMPTY";

  cout<<"\n\n***** find() *****";
  i = s.begin();
  i = s.find(2);
  cout<<"\n"<<*i<<" is found";

  cout<<"\n\n***** erase() & insert() *****";
  i = s.begin();
  s.insert(i,10);
  s.erase(i);
  display(s,i);
}
