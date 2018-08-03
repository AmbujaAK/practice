#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int sum=0;
	    for(int i=0;i<n;i++)
	        sum += a[i];
	    if(sum%2!=0)
	        cout<<"NO"<<endl;
	    else {
	        bool dp[sum/2+1][n+1];
	        for(int i=1;i<=n;i++)
	            dp[0][i]=true;
	        for(int i=1;i<=sum/2+1;i++)
	            dp[i][0]= false;
	        for(int i=1;i<=sum/2+1;i++){
	            for(int j=1;j<=n;j++){
	                if(a[j-1]<=i)
	                    dp[i][j]=dp[i-a[j-1]][j-1]||dp[i][j-1];
	                else 
	                    dp[i][j]= dp[i][j-1];
	            }
	        }
	        if(dp[sum/2][n])
	            cout<<"YES"<<endl;
	        else
	            cout<<"NO"<<endl;}
	}
}