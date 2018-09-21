#include <iostream>
using namespace std;

bool solve(int arr[], int n, int total){
    bool DP[n+1][total+1];
    for (int i=0; i<=n; i++)
        DP[i][0] = true;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=total; j++){
            if ( j - arr[i-1] >= 0)
                DP[i][j] = DP[i-1][j] || DP[i-1][j-arr[i-1]];
            else
                DP[i][j] = DP[i-1][j];
        }
    }
    return DP[n][total];
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    int total;
    cin>>total;

    if(solve(arr,n,total) == true)
        cout<<"TRUE"<<endl;
    else
        cout<<"FALSE"<<endl;
}