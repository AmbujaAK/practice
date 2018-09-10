#include <iostream>
using namespace std;

int shellSort(int arr[], int n){
    for (int gap = n/2; gap > 0; gap /=2){
        for (int i=gap; i<n; i++){
            int temp = arr[i];

			int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j-gap];
            arr[j] = temp;
        }
    }
    return 0;
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
		shellSort(arr,n);
		
		cout<<"case #"<<z<<" ";
		display(arr,n);
	}
	return 0;
}