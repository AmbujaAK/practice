// use catalan number to find this .
#include<iostream>
using namespace std;

unsigned long int biCof(unsigned int n, unsigned int k){
    unsigned long int res = 1;
    
    // Since C(n, k) = C(n, n-k)
    if(k > n-k)
        k = n-k;
 
    // Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1]
    for(int i = 0; i < k; ++i){
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}

unsigned long int catalan(unsigned int n){
    unsigned long int x = biCof(2 * n, n);

    return x/(n+1);
}

unsigned long int solve(unsigned int n){
    if( n & 1)
        return 0;
    return catalan(n/2);
}

int main(){
    int n;
    cin>>n;

    unsigned int ans = solve(n);
    cout<<ans<<endl;
}
