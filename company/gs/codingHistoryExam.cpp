#include<iostream>
using namespace std;

int solve(int corr[],int a[],int k){
    int DP[k+1][k+1];
    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
            if(i==0 || j==0)
                DP[i][j] = 0;
            else if(corr[i-1] == a[j-1])
                DP[i][j] = DP[i-1][j-1] + 1;
            else
                DP[i][j] = max(DP[i-1][j],DP[i][j-1]); 
        }
    }
    return DP[k][k];
}

int main(){
    int k;
    cin>>k;
    int corr[k];
    for(int i=0; i<k; ++i)
        cin>>corr[i];
    int n;
    cin>>n;
    cin>>k;
    int a[k];
    while(n--){
        for(int i=0; i<k; ++i)
            cin>>a[i];
        int ans = solve(corr,a,k);
        cout<<ans<<endl;
    }
}