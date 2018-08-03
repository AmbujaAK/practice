#include<iostream>
using namespace std;

int lcs(string s1, string s2){
    int l1 = s1.length();
    int l2 = s2.length();

    int DP[l1+1][l2+1];
    int ans = 0;
    for(int i=0; i<=l1; i++){
        for(int j=0; j<=l2; j++){
            if(i==0 || j==0)
                DP[i][j] = 0;
            else if(s1[i-1]==s2[j-1]){
                DP[i][j] = DP[i-1][j-1] + 1;
                if(DP[i][j] > ans)
                    ans = DP[i][j];
            }
            else
                DP[i][j] = 0;
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        string s1,s2;
        cin>>s1;
        cin>>s2;

        int ans = lcs(s1,s2);
        cout<<ans<<endl;
    }
}