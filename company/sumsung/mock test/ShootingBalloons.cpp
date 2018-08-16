#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getMaxScore(int arr[],int n)
{
    int temp[n+2];
    for(int i=1;i<=n;i++)
        temp[i]=arr[i-1];
    
    temp[0]=temp[n+1]=1;
    
    int n1=n+2;
    int dp[n1][n1]={};
    
    for(int i=2;i<n1;i++)
    {
        for(int left=0;left<n1-i;left++)
        {
            int right=left+i;
            for(int j=left+1;j<right;j++)
            {
                if(temp[left]==1 && temp[right]==1)
                    dp[left][right]=max(dp[left][right],temp[j]+dp[left][j]+dp[j][right]);
                else
                    dp[left][right]=max(dp[left][right],temp[left]*temp[right]+dp[left][j]+dp[j][right]);
            }
        }
    }    
    return dp[0][n1-1];
}

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout<<getMaxScore(arr,n)<<endl;
    }
   
    return 0;
}