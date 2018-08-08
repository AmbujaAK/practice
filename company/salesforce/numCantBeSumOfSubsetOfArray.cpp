#include<iostream>
using namespace std;

int solve(int a[],int n){
    int res = 1;
    
    for(int i=0; i<n; ++i){
        if(a[i] <= res)
            res += a[i]; 
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i)
        cin>>a[i];
    int ans = solve(a,n);
    cout<<ans<<endl;
}