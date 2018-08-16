#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,q;
    cin>>n>>q;
    long double arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    long double a,b,k;
    int i;
    while(q--){
        cin>>a>>b>>k;
        k = ((k-b)/(a));
        i = (lower_bound(arr,arr+n,k) - arr);
        cout<<i<<endl;
    }
    
    return 0;
}
