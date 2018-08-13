#include<iostream>
#include<stack>
using namespace std;

void del(stack<int> &s1){
    int t = s1.top();
    s1.pop();
}

stack<int> ins(stack<int> s1,int x){
    stack<int> s2;
    if(s1.empty())
        s1.push(x);
    else{
        while(!s1.empty()){
            int tmp = s1.top();
            s1.pop();
            s2.push(tmp);
        }

        s1.push(x);
        
        while(!s2.empty()){
            int t = s2.top();
            s2.pop();
            s1.push(t);
        }
    }
    //cout<<"top : "<<s1.top()<<endl;
    return s1;
}

void isEmpty(stack<int> s){
    if(s.empty())
        cout<<"EMPTY"<<endl;
    else
        cout<<"NOT EMPTY"<<endl;
}

int getFront(stack<int> s){
    return s.top();
}

void display(stack<int> s){
    stack<int> temp;
    while(!s.empty()){
        int t = s.top();
        s.pop();
        temp.push(t);
    }
    while(!temp.empty()){
        int t = temp.top();
        temp.pop();
        cout<<t<<" ";
    }
    
    cout<<endl;
}

int main(){
    stack<int> s;
    while(1){
        cout<<"\n***** Implementation *****"<<endl;
        cout<<"\n1. insert";
        cout<<"\n2. delete";
        cout<<"\n3. isEmpty";
        cout<<"\n4. top";
        cout<<"\n0. Exit";
        
        int ch;
        cout<<"\nChoose your choice :";
        cin>>ch;
        switch(ch){
            case 1:
                int t;
                cin>>t;
                s = ins(s,t);
                display(s);
                break;
            case 2:
                del(s);
                display(s);
                break;
            case 3:
                isEmpty(s);
                break;
            case 4:
                cout<<getFront(s)<<endl;
                break;
            default :
                exit(0);
        }
    }
}