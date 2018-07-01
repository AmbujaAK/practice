#include<iostream>
#include<algorithm>

using namespace std;

void reverseArray(int a[],int n){
    int aa[n];
    for(int i=0; i<n; i++){
        aa[i] = a[n-1-i];
    }
    for(int i=0; i<n; i++){
        a[i] = aa[i];
    }

}
int main(){
  int n;
  cout<<"\nEnter the size of array : ";
  cin>>n;
  int a[n];
  cout<<"\nEnter the elements of array : ";
  for(int i=0; i<n; i++)
    cin>>a[i];

  reverseArray(a,n);
  for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}
