#include<bits/stdc++.h>
using namespace std;
typedef long long int in;
in a[10000009];
int main()
 {
    //code
     ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        //cout.tie(NULL);
    in t;
    cin>>t;
    while(t--) {
       
        in n;
        cin>>n;
        
        for(int i=0;i<n;i++) cin>>a[i];
        in incl = a[0], excl =0, exclnew = 0;
        for(int i=1;i<n;i++) {
            exclnew = (incl > excl ? incl : excl);
            incl = excl + a[i];
            excl = exclnew;
        }
        cout<<max(excl,incl)<<'\n';
    }
    return 0;
}
