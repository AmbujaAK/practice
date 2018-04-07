#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int n = 100;
	int arr[n];
	cout<<"\nEnter the size of array";
	cin>>n;

	for(int i=0; i<n; i++){
		int r = rand() % 100;
		arr[i] = r;
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
