#pragma GCC optimize("-Ofast")
#include<iostream>
using namespace std;

int maxCoinsDP(int iNums[],int sz) {
    int nums[sz + 2];
    int i;
    for (int x=1;x<=sz;x++)
    {
    	nums[x]=iNums[x-1];
    }
    nums[0] = nums[sz+1] = 1;
    int n=sz+2;
    int z;
    int dp[n][n] = {};
    for (int k = 2; k < n; ++k) {
        for (int left = 0; left < n - k; ++left) {
            int right = left + k;
            for (int i = left + 1; i < right; ++i) {
                if(nums[left]==1&&nums[right]==1)
                {
                    z= max(dp[left][right],
                    nums[i] + dp[left][i] + dp[i][right]);
                }
                else
                {
                    z= max(dp[left][right],
                     nums[left] * nums[right] + dp[left][i] + dp[i][right]);
                }
                dp[left][right]=z;
            }
        }
    }
    return dp[0][n - 1];
}

int main()
{
	int t;
	cin>>t;
	int test=t;
	while(t--)
	{
		int n;
		cin>>n;
		int iNums[n];
		for(int i=0;i<n;i++)
		{
			cin>>iNums[i];
		}
		int ans=maxCoinsDP(iNums,n);
		cout<<"#"<<test-t<<" "<<ans<<endl;
	} 
	return 0;
}