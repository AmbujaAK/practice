#include<iostream>
using namespace std;

int solve(int a[],int n){
    int in = a[0];
    int ex = 0;
    int exN ;
    for(int i=1; i<n; i++){
        exN = max(in,ex);
        in = ex + a[i];
        ex = exN;
    }
    return max(ex,in);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int ans = solve(a,n);
    cout<<ans<<endl;
    
    return 0;
}