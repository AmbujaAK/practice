/*
Input :
2
5
0 2 1 2 0
3
0 1 0
*/
#include<iostream>
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
        
        int temp[3] = {0};
        for(int i=0; i<n; i++)
            temp[arr[i]]++;
        
        for(int i=0; i<3; i++){
            while(temp[i]--)
                cout<<i<<" ";
        }
        cout<<endl;
    }
}