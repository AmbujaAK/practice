/*
Input:
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output:
4
9
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
        int sum = 0;
        
        for(int i=0; i<n-1; i++){
            cin>>arr[i];           
            sum += arr[i];
        }
        
        int Nth_sum = (n * (n + 1))/2;
        //cout<<"sum : "<<sum<<"\nNth_sum : "<<Nth_sum<<endl;
        int diff = abs(Nth_sum - sum);
        cout<<diff<<endl;
    }
}