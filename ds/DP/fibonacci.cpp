#include<iostream>
using namespace std;

int fibo(int n){
	int DP[n+1];

	DP[0] = 0;
	DP[1] = 1;

	for(int i=2; i<=n; i++)
		DP[i] = DP[i-1] + DP[i-2];
	return DP[n];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		cout<<fibo(n)<<endl;
	}
}