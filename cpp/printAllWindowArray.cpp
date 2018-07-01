#include<iostream>
using namespace std;

int checkDistinct(int arr[], int k){
  int c=1;
  for(int i=0; i<k-1; i++){
    if(arr[i] != arr[i+1])
      c++;
  }
  return c;
}

int main(){
  int n,k;
  cout<<"\nEnter the size of array : ";
  cin>>n;
  cout<<"\nEnter the size of window : ";
  cin>>k;
  int arr[n];
  cout<<"\nEnter the elements of array : ";
  for(int i=0; i<n; i++)
    cin>>arr[i];

  int ct;
  for(int i=0; i<n-k+1;i++){
    ct = 0;
    int b[k];
    for(int j=i; j<k+i; j++){
      int z = 0;
      b[z] = arr[j];
      cout<<b[z]<<" ";
      z++;
    }
    ct = checkDistinct(b,k);
    cout<<"\nDistinct : "<<ct;
    cout<<endl;
  }
}
