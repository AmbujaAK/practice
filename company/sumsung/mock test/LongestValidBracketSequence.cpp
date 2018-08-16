#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    string str;
    cin>>str;
    
    stack<int> s;
    s.push(-1);
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(')
            s.push(i);
        else if(str[s.top()]=='(' && str[i]==')')
            s.pop();
        else
            s.push(i);
    }
    int prev=n;
    int count=0;
    int max=1;
    while(!s.empty())
    {
        if(max<prev-s.top())
        {
            count=1;
            max=prev-s.top();
        }
        else if(max==prev-s.top())
            count++;
        prev=s.top();
        s.pop();
    }
    if(max==1)
        cout<<"0 1"<<endl;
    else
        cout<<max-1<<" "<<count<<endl;
    return 0;
}
