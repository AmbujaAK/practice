#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countRightZero(vector<int> v,int i){
    int count = 0;
    for(int j=i; j<v.size(); ++j){
        if(v[i]==0)
            count++;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        vector<int> v(2*n);
        for(int i=0; i<2*n; ++i)
            cin>>v[i];
        
        int c1=0,c2=0;
        for(int i=0; i<2*n-1; ++i){
            if(v[i]==1){
                int a = countRightZero(v,i+1);
                c1 += a;
            }
        }
        reverse(v.begin(),v.end());
        for(int i=0; i<2*n-1; ++i){
            if(v[i]==1){
                int b = countRightZero(v,i+1);
                c2 += b;
            }
        }
        int ans = min(c1,c2);
        cout<<ans<<endl;
    }
}