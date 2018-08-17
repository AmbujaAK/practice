#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end ) {
	int i,j,k;
	int n1 = mid-start + 1;
	int n2 = end-mid;
	
	int leftArray[n1];
	int rightArray[n2];
	
	for (i = 0; i < n1; i++)
        leftArray[i] = arr[start+i];
    
	for (j = 0; j < n2; j++)
        rightArray[j] = arr[mid+1+j];
	
	i=0,j=0,k=start;

	while(i<n1 && j<n2){
		if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        }
        else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
	}
	
	while(i < n1){
		arr[k] = leftArray[i];
        i++;
        k++;
	}
	while(j < n2){
		arr[k] = rightArray[j];
        j++;
        k++;
	}
}

void mergeSort(int arr[], int start, int end){
	if (start < end){
		int mid = (start + end)/2;

		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1, end);
		merge(arr, start, mid, end);
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
		mergeSort(arr,0,n-1);
		
		cout<<"case #"<<z<<" ";
		display(arr,n);
	}
	return 0;
}