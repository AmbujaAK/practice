#include<iostream>
using namespace std;

void printSortedArray(int arr[],int start, int end){
  if(start>end)
    return;
  printSortedArray(arr,start*2+1,end);
  cout<<arr[start]<<" ";
  printSortedArray(arr,start*2+2,end);
}
int main(){
  cout<<"\nEnter the size of array : ";
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];

  printSortedArray(arr,0,n-1);
}
