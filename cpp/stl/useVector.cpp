#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v,vector<int>::iterator i){
  cout<<"\nCurrent Vector is : ";
  /*
  // using iterator...
  for(i = v.begin(); i != v.end(); ++i)
    cout<<*i<<" ";
  */
  // using at();
  for(int i = 0;i < v.size();++i)
    cout << v.at(i) << ' ';
}

int main(){
  vector<int> v;
  vector<int>:: iterator i;
  int val;

  cout<<"\nEnter elements : ";
  for(int i=0; i<5; ++i){
    cin>>val;
    v.push_back(val);
  }

  display(v,i);

  cout<<"\n\n***** at() *****";
  cout<<"\nelement at position 1 : "<<v.at(1);

  cout<<"\n\n***** front() & back() *****";
  cout<<"\nfirst element is : "<<v.front();
  cout<<"\nlast element is : "<<v.back();

  cout<<"\n\n***** erase() *****";
  int pos;
  cout<<"\nEnter the position to be erased : ";
  cin>>pos;
  for(i=v.begin(); i!=v.end(); i++){
    if(*i==pos)
      v.erase(i);
    i--;
  }
  display(v,i);

  cout<<"\n\n***** empty() & clear() *****";
  cout<<"\ncheck the vector : ";
  v.clear();
  display(v,i);
  if(v.empty() == 1)
    cout<<"\nEMPTY";
  else
    cout<<"\nNOT EMPTY";

  cout<<"\n\n***** insert() *****";
  i = v.begin();
  i = v.insert(i,6);
  v.insert(i,7);

  display(v,i);

  cout<<"\n\n***** push_back() & pop_back() *****";
  v.push_back(8);
  display(v,i);
  v.pop_back();
  display(v,i);
}
