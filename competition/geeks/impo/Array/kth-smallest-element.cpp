/*
INPUT :
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4

Output :
7
15
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        int k;
        cin>>k;

        sort(arr,arr+n);
        cout<<arr[k-1]<<endl;
    }
}