#include<iostream>
#include<stack>
#include<queue>
using namespace std;


queue<int> solve(queue<int> &q, int k){
    stack<int> stack;
    for(int i=0; i<k; i++){
        int temp = q.front();
        q.pop();
        stack.push(temp);
    }
    while(!stack.empty()){
        int temp = stack.top();
        stack.pop();
        q.push(temp);
    }
    
    for(int i=0; i<q.size()-k; i++){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    
    return q;
}

// display the elements of queue.
void display(queue<int> q){
    // stack is taken to reverse the queue
    stack<int> s;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
    }
    cout<<"--> ";
    // printing the elements
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        cout<<temp<<" ";
    }
    cout<<"-->";
}

int main(){
    int n;
    cout<<"\nEnter number of elements : ";
    cin>>n;
    queue<int> q;
    cout<<"\nEnter "<< n <<" elements : ";
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        q.push(temp);
    }
    int k;
    cout<<"\nEnter value of 'K' : ";
    cin>>k;
    cout<<"\nBefore : "<<endl;
    display(q);
    cout<<"\nAfter : "<<endl;
    q = solve(q,k);
    display(q);
}