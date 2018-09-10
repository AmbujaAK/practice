#include <iostream>
using namespace std;

int countOne(int n){
    while(n > 0){
        if (n % 4 == 3)
            return 1;
        n = n >> 1;
    }
    return 0;
}

int main(){
    int N,Q;
    cin>>N>>Q;

    int arr[N+1],bit[N+1];
    bit[0] = 0;
    for (int i=1; i<=N; i++){
        cin>>arr[i];
        bit[i] = countOne(arr[i]);
        //cout<<bit[i]<<endl;
    }
    int sum = 0;
    for (int i=1; i<=N; i++){
        sum += bit[i];
        bit[i] = sum;
        //cout<<bit[i]<<endl;
    }
    for (int i=0; i<Q; i++){
        int L,R;
        cin>>L>>R;

        int ans = 0;
        cout<<bit[R]-bit[L-1]<<endl;
    }
}
