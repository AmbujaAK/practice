/*
Input
1
5 3
1 2 3 4 5

Output
3 2 1 5 4
*/
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int start = 0, end=0;
        for(int i=0; i<n; i=i+k){
            for(int j=i+k-1; j>=i; j--)
                if(j < n)
                    cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}