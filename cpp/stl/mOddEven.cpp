#include<iostream>
#include<map>
#include<vector>

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

  int n;
  cout<<"\nEnter the size of vector : ";
  cin>>n;
  vector<int> v(n);
  for(int i=0; i<v.size(); i++)
    cin>>v.at(i);

  for(int i=0; i<n; i++){
    if(v[i]%2==0){
      p.first = v[i];
      p.second = 'e';
    }else{
      p.first = v[i];
      p.second = 'o';
    }
    m.insert(p);
  }

  display(m,p,i);
}
