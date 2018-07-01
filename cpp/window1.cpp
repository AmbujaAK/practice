//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int checkNeg(queue<int> q){
    //cout<<"h";
    while(!q.empty()){
        int f = q.front();
        if(f<0)
            return f;
        q.pop();
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        cin>>k;

        queue<int> q;

        vector<int> v;
        int ans;
        for(int i=0; i<n; i++){
            q.push(a[i]);
            cout<<"aaa"<<endl;
            cout<<q.size()<<endl;
            if(q.size()==k){
                //cout<<"cc";
                ans = checkNeg(q);
                v.push_back(ans);
                q.pop();
            }
        }
        vector<int>:: iterator it;
        for(it=v.begin(); it!=v.end(); it++)
            cout<<*it<<" ";
        cout<<endl;
    }
    return 0;
}
