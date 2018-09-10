#include<iostream>
#include<string>
#include<queue>
using namespace std;

void solve(int n){
    queue<string> q;
    q.push("1");

    while(n--){
        q.push(q.front() + '0');
        q.push(q.front() + '1');

        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    int n;
    cin>>n;

    solve(n);
}