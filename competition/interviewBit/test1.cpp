#include<iostream>
#include<vector>
#include<set>
#include<cstring>
using namespace std;

int solve(vector<int> &A){
    long long int prod = 1;
    for(int i=0; i<A.size(); ++i)
        prod *= A[i];
    //cout<<"prod :"<<prod<<endl;
    
    //vector<bool> prime(prod+1);
    bool prime[prod+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=prod; p++){
        if (prime[p] == true){
            for (int i=p*2; i<=prod; i += p)
                prime[i] = false;
        }
    }
    set<int> set;
    cout<<"prod : "<<prod<<endl;
    for(int i=2; i<=prod; i++){
        if(prime[i] && prod%i==0){
            set.insert(i);
            cout<<"i :"<<i<<endl;
       }
    }

    return set.size();
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int ans = solve(v);
    cout<<ans<<endl;
}