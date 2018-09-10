#include <iostream>
using namespace std;

int solve(int a[], int n){
    int max_val = a[0];
    int sum = a[0];
    for(int i=0; i<n; i++){
        int sum = 0;
        sum = max(a[i], sum + a[i]);
        max_val = max(sum,max_val);
    }
    return max_val;
}

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        int ans = solve(a,n);
        cout<<ans<<endl;
    }
}