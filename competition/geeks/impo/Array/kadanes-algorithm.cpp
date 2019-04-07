/**
 * Kadane's Algorithm
 * 
 * Find max sum in contiguous sub-array
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int sum = arr[0];
    int max_sum = arr[0];
    for(int i=1; i<n; i++){
        sum = max(arr[i] , sum + arr[i]);
        max_sum = max(sum,max_sum);
    }
    cout<<"Max sum : "<<max_sum<<endl;
}

/*
Input :
3
1 2 3
4
-1 -2 -3 -4

Output :
6
-1
*/