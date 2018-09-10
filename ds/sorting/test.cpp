#include <iostream>
using namespace std;

// swap
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// quick sort
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++){
        if (arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

// heap sort
void heapify(int arr[], int n, int i){
    int root = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if ( left < n && arr[left] > arr[root])
        root = left;

    if (right < n && arr[right] > arr[root])
        root = right;
    
    if ( root != i){
        swap(arr[i], arr[root]);
        heapify(arr, n, root);
    }
}

void heapSort(int arr[], int n){
    for (int i = n/2-1; i>=0; i--)
        heapify(arr, n, i);
    
    for (int i = n-1; i>=0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// merge sort
void merge(int arr[], int start, int mid, int end){
    int i,j,k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int a1[n1];
    int a2[n2];

    for (i = 0; i < n1; i++)
        a1[i] = arr[start+i];
    
    for (j = 0; j < n2; j++)
        a2[j] = arr[mid+1+j];

    i=0, j=0, k=start;

    while (i < n1 && j < n2){
        if(a1[i] <= a2[j]){
            arr[k] = a1[i];
            i++;
        } else {
            arr[k] = a2[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        arr[k] = a1[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = a2[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end){
    if (start < end){
        int mid = (start + end)/2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr,start, mid, end);
    }
}

// selection sort
void selectionSort(int a[], int n){
    for (int i=0; i<n-1; i++){
        int min = i;
        for (int j=i+1; j<n; j++){
            if (a[j] < a[min])
                min = j;
        }
        swap (&a[i], &a[min]);
    }
}

// bubble sort
void bubbleSort(int a[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

// insertion sort
void insertionSort(int a[], int n){
    for (int k = 1; k<n; k++){
        int key = a[k];
        int i = k-1;
        while (i >=0 && a[i] > key){
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
}

// display the element
void display(int arr[], int n){
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
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
        cout<<"\nChoose your sorting : ";
        cout<<"\n1. Insertion Sort";
        cout<<"\n2. Bubble Sort";
        cout<<"\n3. Selection Sort";
        cout<<"\n4. Merge Sort";
        cout<<"\n5. Heap Sort";
        cout<<"\n6. Quick Sort";
        
        cout<<endl;
        int ch;
        cin>>ch;
        switch(ch){
            case 1 :
                cout<<"\nInsertion Sort :"<<endl;
                insertionSort(arr,n);
                break;
            case 2 :
                cout<<"\nBubble Sort :"<<endl;
                bubbleSort(arr,n);
                break;
            case 3 :
                cout<<"\nSelection Sort :"<<endl;
                selectionSort(arr,n);
                break;
            case 4 :
                cout<<"\nMerge Sort :"<<endl;
                mergeSort(arr,0,n-1);
                break;
            case 5 :
                cout<<"\nHeap Sort :"<<endl;
                heapSort(arr,n);
                break;
            case 6 :
                cout<<"\nQuick Sort :"<<endl;
                quickSort(arr, 0, n-1);
                break;
            default :
                cout<<"\n*****NOT SORTED*****"<<endl;
                break;
        }
		//insertionSort(arr,n);
		
		cout<<"case #"<<z<<" ";
		display(arr,n);
	}
	return 0;
}