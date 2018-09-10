#include<iostream>
using namespace std;

int solve(int A){
    int ans = 0;
    int i = 1;
    while(i<=A){
        // function P
        int ans1 = 1;
        int k = 1;
        while(k <= i){
            // funtion GCD
            int n1 = k;
            int n2 = i; 
            while(n1 != n2){
                if(n1>n2)
                    n1 -= n2;
                else
                    n2 -= n1;
            }
            // end GCD
            int gcd = n1;
            if(gcd==1)
                ans1 *= k;
            k += 1;
        }
        // end P
        int p = ans1 % i;
        ans += p;
        i += 1;
    }
    int val = ans % 1000000007;
    return val;
}

int main(){
    int n;
    cin>>n;

    int ans = solve(n);

    cout<<ans<<endl;
}