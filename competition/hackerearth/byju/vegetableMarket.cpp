#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long int sum=0;
    // n denoting number of stalls
    cin>>n;
    
    int a[n];
    //a[n] denoting collection of quantity of veg. in each stalls
    for(int i=0; i<n; i++){
        cin>>a[i];
     //sum of total veg.
        sum += a[i]; 
    }
    
    sort(a, a+n);
   //no. of queries    
   int q;cin>>q;
   //
   long long int x, k;  //k is maximum required veg. from each stall
    while(q--){
     //x denoting minimum amount of veg. needed in total.
        cin>>x;
     //if minimum amount of veg. needed in total is greater than total sum of veg.
        if(x>sum){
            cout<<-1<<endl;
            continue;
        }
        
        for(int i=0; i<n; i++){
            //required min. veg. is divisible by no. of stall left.
            if(x%(n-i)==0)
                k = x/(n-i);        //k is maximum no. of veg that can be taken from a stall.
            else
                k = 1 + (x/(n-i));
            //ith stall has k or more veg. then all elements after ith elements has k or more elements.   
            if(a[i]>=k){
                break;
            }else{
                x -= a[i];  //if k veg is not in ith stall, we take all veg from stall. then we have n-1 stall, and x-a[i] veg.
            }
        }
        cout<<k<<endl;
    }