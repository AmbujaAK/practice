#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  cout<<"\nEnter any string : ";
  cin>>str;

  for(int i=1;i<str.length();i++){
    for(int j=0;j<i;j++){
      for(int k=0;k<j+i;k++)
        cout<<str[k]<<" ";
    }
    cout<<endl;
  }
}
