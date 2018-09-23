#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int a[n], b[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    
   long long int k=0;//total no. of revision required.
    //we should start revision from the last element. k is the value that need to be added in each element.
    //because k revisions will increase element value by k.
    for(int i=n-1; i>=0; i--){
        a[i] += k;
        
        if(a[i]%b[i]==0)
            continue;
            
        k += b[i] - a[i]%b[i];
    }
    cout<<k;
    return 0;
}