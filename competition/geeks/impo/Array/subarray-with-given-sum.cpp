/*
Input :
3
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
42 468
135 101 170 125 79 159 163 65 106 146 82 28 162 92 196 143 28 37 192 5 103 154 93 183 22 117 119 96 48 127 172 139 70 113 68 100 36 95 104 12 123 134

*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int sum = 0;
        int j = 0;
        int i = 0;
        bool flag = false;

        while(j < n){
            //cout<<"\nSum : "<<sum<<" j : "<<j<<endl;
            sum += arr[j];

            if(sum > x){
                i++;
                j = i;
                sum = 0;
            }
            else if(sum == x){
                flag = true;
                break;
            }
            else{
                j++;
            }
        }
        if(flag == true)
            cout<<i+1<<" "<<j+1<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}