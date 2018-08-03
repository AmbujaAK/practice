#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int sum = a[0];
    int mx = a[0];
    for(int i=1; i<n; i++){
        sum = max(a[i],sum + a[i]);
        mx = max(sum,mx);
    }
    cout<<mx<<endl;
}