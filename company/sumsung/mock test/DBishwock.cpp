#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1, s2;
    cin>>s1>>s2;
    int n=s1.length();
    int i=0,c=0;
    while(i<n)
    {
        if(s1[i]=='0'&&s2[i]=='0')
        {
            if(i==0&& (s1[i+1]=='0'||s2[i+1]=='0'))
            {
                c++;
                s1[i]='X';
                s2[i]='X';
                if(s1[i+1]=='0')
                    s1[i+1]='X';
                else if(s2[i+1]=='0')
                    s2[i+1]='X';
            }
            else if(i==n-1&& (s1[i-1]=='0'||s2[i-1]=='0'))
            {
                c++;
                s1[i]='X';
                s2[i]='X';
            }
            else if(s1[i-1]=='0'||s1[i+1]=='0'||s2[i-1]=='0'||s2[i+1]=='0')
            {
                c++;
                s1[i]='X';
                s2[i]='X';
                if(s1[i-1]!='0'&& s2[i-1]!='0')
                {
                    if(s1[i+1]=='0')
                        s1[i+1]='X';
                    else if(s2[i+1]=='0')
                        s2[i+1]='X';
                }
            }
        }
        i++;
    }
    cout<<c;
    return 0;
}
