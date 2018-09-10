#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n), v(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    sort(arr.begin(), arr.end());
    long long int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
        v[i] = sum/(i+1);
    }

    int q;
    cin>>q;

    vector<int> qe(n), qe_copy(n);
    for(int i=0; i<q; i++){
        cin>>qe[i];
    }

    qe_copy = qe;
    map<int, int> m;

    sort(qe.begin(), qe.end());

    int j = 0;
    for(int i=0; i<q; i++){
        if(v[0]>=qe[i]){
                m[qe[i]] = 0;
                continue;
        }


        for(j; j<n; j++){
            if(v[j]>=qe[i]){
                m[qe[i]] = j;
                break;
            }
        }
        
        if(j==n){
            m[qe[i]] = n;
        }
    }


    for(int i=0; i<q; i++){
        cout<<m[qe_copy[i]]<<endl;
    }
    return 0;
}