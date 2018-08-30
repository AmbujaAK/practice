#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	for (int i=1; i<=n; i++){
		cout<<i;
		for (int j=0; j<i-1; j++){
			cout<<"*"<<i;
		}
		cout<<endl;
	}
	for (int i=n; i>0; i--){
		cout<<i;
		for (int j=0; j<i-1; j++){
			cout<<"*"<<i;
		}
		cout<<endl;
	}
}
