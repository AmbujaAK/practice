#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void display(list<int> l, list<int>::iterator i){
  cout<<"\nCurrent LIST is : ";
  for(i=l.begin(); i != l.end(); ++i){
    cout<<*i<<" ";
  }
}
int main(){
  list<int> l;
  list<int>:: iterator i;
  int val;

  cout<<"Enter the elements of list : ";
  for(int i=0; i<5; i++){
    cin>>val;
    l.push_back(val);
  }
  display(l,i);

  cout<<"\n\n***** back() & front() *****";
  cout<<"\nlast element : "<<l.back();
  cout<<"\nfront element : "<<l.front();
  display(l,i);

  cout<<"\n\n***** empty() & erase() *****";
  if(l.empty() == 1)
    cout<<"\nEMPTY";
  else{
    //i = l.begin();
    l.erase(find(l.begin(),l.end(),4));
    cout<<"\n2nd element is erased : ";
    display(l,i);
  }

  cout<<"\n\n***** insert() & remove() *****";
  i = l.begin();
  i = l.insert(i,6);
  cout<<"\n"<<*i<<" is inserted ";
  display(l,i);

  l.remove(5);
  cout<<"\n5 is removed.";
  display(l,i);

  cout<<"\n\n***** reverse() *****";
  l.reverse();
  display(l,i);

  cout<<"\n\n***** push_front() & push_back() *****";
  l.push_front(0);
  l.push_back(0);
  display(l,i);

  cout<<"\n\n***** pop_front() & pop_back() *****";
  l.pop_back();
  l.pop_front();
  display(l,i);
}
