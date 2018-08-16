#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int get(int *a,int l,int r,int n) {
    int max=0;
    for(int i=l+1;i<=(r-1);i++) {
        int curr=0;
        curr=get(a,l,i,n)+get(a,i,r,n);
        if((l==0)&&(r==(n+1)))
            curr+=a[i];
        else
            curr+=a[l]*a[r];
        if(curr>max)
            max=curr;
    }
    return max;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--) {
        int n,i,*a;
        cin>>n;
        a=(int *)malloc((n+2)*sizeof(int));
        a[0]=1;
        a[n+1]=1;
        for(i=0;i<n;i++) {
            cin>>a[i+1];
        }
        cout<<get(a,0,n+1,n)<<endl;  
    }
    return 0;
}

