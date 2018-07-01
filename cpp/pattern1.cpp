#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int j=1,q = 1,count=1;

  for(int i=1; i<n; i++){
    while(j){
      cout<<j;
      j++;
      if(i==count){
        cout<<endl;
        count++;
      }
    }
  }
  return 0;
}
