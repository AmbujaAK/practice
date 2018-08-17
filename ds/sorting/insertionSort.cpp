#include<iostream>
using namespace std;
 
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
 
        while (j >= 0 && arr[j] > key) {
           arr[j+1] = arr[j];
           j = j-1;
        }
        arr[j+1] = key;
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
		insertionSort(arr,n);
		
		cout<<"case #"<<z<<" ";
		display(arr,n);
	}
	return 0;
}