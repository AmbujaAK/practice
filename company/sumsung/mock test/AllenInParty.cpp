#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<int> a(2*n);
    for(int i=0;i<2*n;i++)cin>>a[i];
    int i=0,ans=0;
    while(i<2*n){
        if(a[i]==a[i+1]){i=i+2;continue;}
        else{
            for(int j=i+1;j<2*n;j++)
            {
                if(a[j]==a[i]){
                    ans+=(j-i-1);
                    for(int k=j;k>i+1;k--)
                        swap(a[k],a[k-1]);
                }
            }
        i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
