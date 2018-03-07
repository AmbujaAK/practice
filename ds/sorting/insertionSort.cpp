#include<iostream>
using namespace std;
 
void sort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

int main(){
	int n,arr[100];
	cout<<"\nEnter the size of array : ";
	cin>>n;
	cout<<"\nEnter the elements of array : ";
	for(int i=0; i<n; i++)
		cin>>arr[i];

	sort(arr,n);

	cout<<"\nSorted Array using Insertion Sort is : ";
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}