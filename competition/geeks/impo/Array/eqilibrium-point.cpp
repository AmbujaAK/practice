/*
Input :
2
1
1
5
1 3 5 2 2
*/

#include<iostream>
using namespace std;

#define ll long long int

void solve(ll arr[], ll n){
    if(n == 1){
        cout<<"1"<<endl;
        return;
    } else {
        ll sum = 0, lsum =0, rsum = 0;
        for(ll i=0; i<n; i++)
            sum += arr[i];

        cout<<"Total sum : "<<sum<<endl;
        ll i;
        for (i=0; i<n; i++){
            if(i == 0){
                lsum = 0;
                rsum = sum - arr[0];
            }
            if(i > 0){
                lsum += arr[i-1];
                rsum = sum - arr[i] - lsum;
            }
            if(lsum == rsum){
                cout<<i+1<<endl;
                break;
            }
            cout<<"lsum : "<<lsum<<" rsum : "<<rsum<<endl;
        }
        if(i == n)
            cout<<"-1"<<endl;
        return;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll arr[n];
        for(ll i = 0; i<n; i++)
            cin>>arr[i];
        
        solve(arr,n);
    }
    return 0;
}