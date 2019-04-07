// NOT DONE
/*
Input:
2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13

Output:
3 3 4 5 5 5 6
10 10 10 15 15 90 90
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
        
        int maxm = 0;
        for(int i=0; i<n-k+1; i++){
            maxm = arr[i];
            for(int j=0; j<k; j++){
                if(arr[i+j] > maxm)
                    maxm = arr[i+j];
            }
            cout<<maxm<<" ";
        }
        cout<<endl;
    }
}