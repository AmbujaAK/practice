//#include <iostream>
//#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n = s.length();
    cout<<"\nBefore change : ";
    cout<<s<<endl;

    char arr[n+1];
    char* p;
    p = arr;

    strcpy(arr,s.c_str());

    cout<<"\nAfter change : ";
    for(int i=0; i<n; i++)
        cout<<*(p+i);
    
}