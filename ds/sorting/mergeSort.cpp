#include<iostream>
using namespace std;

void merge(int *arr, int l, int m, int r ){
	int i,j,k;
	int n1 = m-l-1;
	int n2 = r-m;
	
	//creating two temp array.
	int arr_1[n1],arr_2[n2];
	
	//copying data to temp array.
	for (i = 0; i < n1; i++)
        arr_1[i] = arr[l + i];
    
	for (j = 0; j < n2; j++)
        arr_2[j] = arr[m + 1+ j];
	
	i=0;
	j=0;
	k=l;
	
	while(i<n1 && j<n2){
		if (arr_1[i] <= arr_2[j])
        {
            arr[k] = arr_1[i];
            i++;
        }
        else
        {
            arr[k] = arr_2[j];
            j++;
        }
        k++;
	}
	
	while(i < n1){
		arr[k] = arr_1[i];
        i++;
        k++;
	}
	while(j < n2){
		arr[k] = arr_2[j];
        j++;
        k++;
	}
}

void sort(int *arr, int l, int r){
	if (l < r){
        	int m = l+(r-l)/2;
 
	        sort(arr, l, m);
        	sort(arr, m+1, r);
 
       		merge(arr, l, m, r);
    	}
}

int main(){
	int n,arr[100];
	cout<<"\nEnter the size of array : ";
	cin>>n;
	cout<<"\nEnter the elements of array : ";
	for(int i=0; i<n; i++)
		cin>>arr[i];

	sort(arr,0,n-1);
	
	cout<<"\nSorted Array using Merge Sort is : ";
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}
