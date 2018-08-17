#include<iostream>
using namespace std;

void swap(int *i, int *j){
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}

void selectionSort(int *a, int n){
	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[min])
				min = j;
		}
		swap(&a[min],&a[i]);
	}
}

void display(int arr[], int n){
	for (int i=0; i<n; i++)
		cout<< arr[i] << " ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	for(int z=1; z<=t; z++){
		int n;
		cin>>n;
		int arr[n];
		for (int i=0; i<n; i++)
			cin>>arr[i];
		selectionSort(arr,n);
		
		cout<<"case #"<<z<<" ";
		display(arr,n);
	}
	return 0;
}