/*
Input:
2
7
1 101 2 3 100 4 5
4
10 5 4 3

Output:
106
10
*/
#include<iostream>
#include<vector>
using namespace std;

void print_array(vector<int> arr, int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int solve(int arr[], int n){
    // coping array into vector.
    vector<int> DP(arr,arr+n);
    
    //print_array(DP,n);
    
    int max = arr[0];
    for(int i=0; i<n; i++){
        for(int j=i-1; j >= 0; j--){
            if(arr[j] < arr[i] && DP[i] < DP[j] + arr[i])
                DP[i] = DP[j] + arr[i];
        }
        if(DP[i] > max){
            max = DP[i];
            //cout<<"\nMax : "<<max<<endl;
        }
    }
    return max;
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
        
        cout<<solve(arr,n)<<endl;
    }
    return 0;
}