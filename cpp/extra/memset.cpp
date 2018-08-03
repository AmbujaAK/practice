//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    char str[n];
    memset(a,-1,sizeof(a));
    memset(str, 'a',sizeof(str));
    for(int i=0; i<n; i++){
        cout<<a[i]<<" "<<str[i];
    }
    cout<<endl;
}