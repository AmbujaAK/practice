/*
Input:
3
6
16 17 4 3 5 2
5
1 2 3 4 0
5
7 4 5 7 3
Output:
17 5 2
4 0
7 7 3
*/
#include<iostream>
using namespace std;

void print_array(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int temp[n] = {0};

        temp[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--)
            temp[i] = max(temp[i+1],arr[i+1]);
        
        //print_array(temp,n);
        for(int i=0; i<n; i++){
            if(arr[i] >= temp[i])
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}