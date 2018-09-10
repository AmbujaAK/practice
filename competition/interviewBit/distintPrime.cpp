#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int solve(vector<int> &A) {
    long long int prod = 1;
    for(int i=0; i<A.size(); ++i)
        prod *= A[i];
    //cout<<"prod :"<<prod<<endl;
    vector<int> f;
    for(int i=1; i<=prod; ++i){
        if(prod % i == 0){
            f.push_back(i);
            cout<<"factors : "<<i<<endl;
        }
    }
    vector<int>::iterator it;
    vector<int> p;
    int k = 0;
    bool flag = true;
    for(it=f.begin(); it!=f.end(); ++it){
        for(int j=2; j<f.size(); ++j){
            int x = *it;
            for(int i=2; i<x; ++i){
                if(x % i == 0)
                    flag = false;
            }
            
            if(flag){
                p.push_back(*it);
                cout<<"prime : "<<*it<<endl;
                break;
            }
        }
        continue;
    }
    return p.size();
}

/*
int solve(vector<int> &A) {
    vector<int> v;
    for(int i=0; i<A.size(); ++i){
        int num = A[i];
        while(num % 2==0){
            v.push_back(2);
            num = num/2;
        }
        for(int j=3; j<=sqrt(num); ++j){
            while(num % j==0){
                v.push_back(i);
                num = num / i;
            }
        }
        if (num > 2)
            v.push_back(num);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    
    return v.size();
}
*/
int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0; i<n; ++i)
        cin>>A[i];
    
    int ans = solve(A);
    cout<<ans<<endl;

    return 0;
}