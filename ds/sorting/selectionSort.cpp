#include<iostream>
using namespace std;

void swap(int *i, int *j){
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}

void sort(int *a, int n){
	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[min])
				min = j;
		}
		swap(&a[min],&a[i]);
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
	cout<<"\nSorted array by Selection sort is : ";
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	
}
