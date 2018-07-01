#include<iostream>
#include<string>

using namespace std;

int main(){
  string str;
  cout<<"\nEnter the string : ";
  getline(cin,str);

  int l = str.length();

  int sum=0;
  for(int i=0; i<l;i++){
    sum+=str[i]-48;
    cout<<sum;
  }
  cout<<"Sum : "<<sum;
}
