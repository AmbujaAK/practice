#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

vector<int> convert_into_binary(int num){
  int i=0,r;
  vector<int> v;
  while(num>0){
    r = num % 2;
    v.push_back(r);
    num = num /2;
    i++;
  }
  reverse(v.begin(),v.end());

  return v;
}

// replace in vector .
vector<int> findComplement(vector<int> v) {
  replace(v.begin(),v.end(),0,2);
  replace(v.begin(),v.end(),1,0);
  replace(v.begin(),v.end(),2,1);

  return v;
}

int convert_into_integer(vector<int> v){
  int p = v.size();
  int ans=0;
  for(int i =0; i<v.size(); i++){
    ans += v.at(i) * pow(2,p-1);
    p--;
  }

  return ans;
}
int main(){
  cout<<"\nEnter any number :";
  int num;
  cin>>num;
  vector<int> v;
  cout<<"\nIts binary value is : ";
  v = convert_into_binary(num);

  for(int i=0; i<v.size(); i++){
    cout<<v[i];
  }
  cout<<"\nIts complement is : ";
  v = findComplement(v);
  for(int i=0; i<v.size(); i++){
    cout<<v[i];
  }
  cout<<"\nIts integer value is : ";
  int ans;
  ans = convert_into_integer(v);
  cout<<ans;
}
