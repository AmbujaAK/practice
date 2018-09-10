#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    int arr[n+1];

    for (int  i=0; i<n; i++)
        cin>>arr[i];

    arr[n] = 0;
    
    int sum1 = 0, sum2 = 0;
    for(int i=0; i<k; i++)
        sum1 += arr[i];
    
    int max_sum = 0;
    for (int i=k;i>=1; i--){
        sum1 -= arr[k-1];
        sum2 += arr[n-1-k+i];
        //cout<<"sum : "<<sum1<<" "<<sum2<<endl;
        max_sum = max(max_sum, sum1+sum2);
    }
    cout<<max_sum<<endl;
}