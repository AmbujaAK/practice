#include<iostream>
#include<vector>
#include<set>
#include<cstring>
using namespace std;
const long long MAX_SIZE = 100001;

vector<long long >isprime(MAX_SIZE , true);
vector<long long >prime;
vector<long long >SPF(MAX_SIZE);

int solve(vector<int> &A){
    long long int N = 1;
    for(long long int i=0; i<A.size(); ++i)
        N *= A[i];
    //cout<<"prod :"<<prod<<endl;

    isprime[0] = isprime[1] = false ;
 
    for (long long int i=2; i<N ; i++){
        if (isprime[i]){
            prime.push_back(i);
            SPF[i] = i;
        }
        for (long long int j=0;
             j < (int)prime.size() &&
             i*prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i*prime[j]]=false;
            SPF[i*prime[j]] = prime[j] ;
        }
    }

    set<int> set;
    for (int i=0; i<prime.size() && prime[i] <= N ; i++)
        set.insert(prime[i]);
    cout<<"size :"<<set.size()<<endl;
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