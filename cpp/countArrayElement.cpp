#include<iostream>
using namespace std;

int countElement(int arr[],int n,int ele){
  int c=0;
  for(int i=0; i<n; i++){
    if(arr[i] == ele)
      c++;
  }
  return c;
}
int main(){
  int n;
  cout<<"\nEnter the size of array :";
  cin>>n;
  int arr[n];
  cout<<"\nEnter the elements of array :";
  for(int i=0; i<n; i++)
    cin>>arr[i];
  int ele;
  cout<<"\nEnter any element of array to count :";
  cin>>ele;
  int count=0;
  count = countElement(arr,n,ele);

  cout<<"\nCount is : "<<count;
}
