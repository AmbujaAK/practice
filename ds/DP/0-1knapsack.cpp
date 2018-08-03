#include<iostream>
using namespace std;

int knapsack(int maxW, int wt[], int val[], int n){
	int DP[n+1][maxW+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=maxW; j++){
			if(i==0 || j==0)
				DP[i][j] = 0;
			else if(wt[i-1] <= maxW)
				DP[i][j] = max(val[i-1] + DP[i-1][j-wt[i-1]], DP[i-1][j]);
			else
				DP[i][j] = DP[i-1][j];
		}
	}
	return DP[n][maxW];
}

int main(){
	cout<<"\nEnter number of objects : ";
	int n;
	cin>>n;
	int wt[n],val[n];
	cout<<"\nEnter weights of objects : ";
	for(int i=0; i<n; i++)
		cin>>wt[i];
	cout<<"\nEnter values of objects : ";
	for(int j=0; j<n; j++)
		cin>>val[j];

	int maxW;
	cout<<"\nEnter the maximum weights : ";
	cin>>maxW;

	cout<<knapsack(maxW,wt,val,n);

	return 0;
}