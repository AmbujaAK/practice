#include<bits/stdc++.h>
using namespace std;

int base6(string s){
    int ans = 0;
    for(int i=0; i<s.length(); i++){
        ans += s[s.length()-i-1] * pow(6,i);
    }
    return ans;
}

int main(){
    string n;
    cin>>n;
    cout<<base6(n);
}