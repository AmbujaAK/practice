#include<iostream>
#include<map>
using namespace std;

void display(map<int,char> m,pair<int,char> p,map<int,char>:: iterator i){
  cout<<"\ncurrent Map :"<<endl;
  for(i = m.begin(); i != m.end(); ++i){
    cout<<i->first<<" "<<i->second<<endl;
  }
}
int main(){
  map<int,char> m;
  map<int,char>:: iterator i;
  pair<int,char> p;

  int key;
  char val;
  cout<<"\nEnter key value pair for mapping :";
  for(int i=0; i<5; i++){
    cin>>key>>val;
    p.first = key;
    p.second = val;
    m.insert(p);
  }
  display(m,p,i);

  cout<<"\n\n***** find() & at() *****";
  int k1,k2;
  cout<<"\n\nEnter the element to find :";
  cin>>k1;
  i = m.begin();
  i = m.find(k1);
  cout<<"Value of "<<i->first<<" is found to be "<<i->second;
  cout<<"\n\nEnter the element to find :";
  cin>>k2;
  cout<<"Value of "<<k2<<" is found to be "<<m.at(k2);

  cout<<"\n\n***** erase() & empty() *****";
  m.erase(1);
  display(m,p,i);
  m.erase(m.begin(),m.end());
  display(m,p,i);
  if(m.empty())
    cout<<"\nEMPTY";
  else
    cout<<"\nNOT EMPTY";
}
