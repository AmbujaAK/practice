#include<iostream>
using namespace std;

void swap(int *a, int i, int j){
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void sort(int *a, int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(a[j]>a[j+1])
				swap(a,j,j+1);
		}
	}
}

int main(){
	int n,arr[100];
	cout<<"\nEnter the size of array : ";
	cin>>n;
	cout<<"\nEnter the elements of array : ";
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr,n);
	cout<<"\nSorted array is : ";
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}
