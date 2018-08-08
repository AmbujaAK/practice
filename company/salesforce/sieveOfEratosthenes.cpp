// to find prime number efficiently
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

void solve(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int i=2; i <= sqrt(n); ++i){
        if(prime[i] == true){
            for(int j=i*2; j<=n; j+=i)
                prime[j] = false;
        }
    }

    for(int i=2; i<=n; i++)
        if(prime[i])
            cout<<i<<" ";
    cout<<endl;
}

int main(){
    cout<<"\nEnter any number to find its factors : ";
    int n;
    cin>>n;

    solve(n);
    cout<<endl;
}