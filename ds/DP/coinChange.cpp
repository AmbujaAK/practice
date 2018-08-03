#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"\nEnter the number of denomination : ";
	int n;
	cin>>n;
	cout<<"\nEnter the value of denomination : ";
	int val[n];
	for(int i=0; i<n; i++)
		cin>>val[i];
	cout<<"\nEnter the number of cents : ";
	int cent;
	cin>>cent;

	// 2-D array to store all possibilities.
	int DP[n+1][cent+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=cent; j++){
			if(i==0 || j==0)
				DP[i][j] = 0;
			else if (val[i-1] > j)
				DP[i][j] = DP[i-1][j];
			else if (val[i-1] == j)
				DP[i][j] = 1 + DP[i-1][j];
			else
				DP[i][j] = DP[i-1][j] + DP[i][j-val[i-1]];
		}
	}

	cout<<DP[n][cent];
}