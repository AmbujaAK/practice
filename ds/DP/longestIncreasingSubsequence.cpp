/*
7
3 4 -1 0 6 2 3
*/

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> v){
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int solve(vector<int> v){
    vector<int> DP(v.size());
    vector<int> solution(v.size());

    for (int i=0; i<v.size(); i++){
        DP[i]= 1;
        solution[i] = i;
    }

    for (int i=1; i<v.size(); i++){
        for (int j=0; j<i; j++){
            if (v[i] > v[j]){
                if (DP[j] + 1 > DP[i]){
                    DP[i] = DP[j] + 1;
                    solution[i] = j;
                }
            }
        }
    }

    //display(DP);
    // find index of max val in DP 
    int maxIndex = 0;
    for (int i=0; i<DP.size(); i++){
        if (DP[i] > DP[maxIndex])
            maxIndex = i;
    }

    return DP[maxIndex];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int ans = solve(arr);
    cout<<ans<<endl;    
}