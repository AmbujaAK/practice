#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  cout<<"\nEnter any string : ";
  getline(cin,str);
  //cin>>str;
  cout<<"\nGiven string is : ";
  cout<<str;

  cout<<"\nAdd some more character : ";
  str.push_back('a');

  cout<<"\nNew string is : ";
  cout<<str;
}
