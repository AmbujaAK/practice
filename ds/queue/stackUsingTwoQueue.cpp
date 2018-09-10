#include<iostream>
#include<queue>
using namespace std;

// delete top element of stack
void del(queue<int> &q){
    if(q.empty())
        cout<<"\nEMPTY QUEUE !!"<<endl;
    else {
        int t = q.back();
        q.pop();
    }
}

// insert element into top of the stack
queue<int> ins(queue<int> q,int x){
    queue<int> temp;
    if(q.empty())
        q.push(x);
    else{
        while(!q.empty()){
            int tmp = q.front();
            q.pop();
            temp.push(tmp);
        }

        q.push(x);
        
        while(!temp.empty()){
            int t = temp.front();
            temp.pop();
            q.push(t);
        }
    }
    return q;
}
// checking if stack is empty
void isEmpty(queue<int> q){
    if(q.empty())
        cout<<"EMPTY"<<endl;
    else
        cout<<"NOT EMPTY"<<endl;
}

// get top element of the stack
int getTop(queue<int> q){
    if(q.empty())
        return -1;
    return q.front();
}

// print the elements of stack
void display(queue<int> q){
    queue<int> temp;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        temp.push(t);
    }
    cout<<"*****"<<endl;
    while(!temp.empty()){
        int t = temp.front();
        temp.pop();
        cout<<"* "<<t<<" *"<<endl;
    }
    cout<<"*****"<<endl;
    cout<<endl;
}

int main(){
    queue<int> q;
    while(1){
        cout<<"\n***** Implementation *****"<<endl;
        cout<<"\n1. Insert";
        cout<<"\n2. Delete";
        cout<<"\n3. IsEmpty";
        cout<<"\n4. Top";
        cout<<"\n5. Display";
        cout<<"\n0. Exit";
        
        int ch;
        cout<<"\nChoose your choice :";
        cin>>ch;
        switch(ch){
            case 1:
                int t;
                cout<<"\nEnter the element : ";
                cin>>t;
                q = ins(q,t);
                //display(q);
                break;
            case 2:
                del(q);
                //display(q);
                break;
            case 3:
                isEmpty(q);
                break;
            case 4:
                cout<<getTop(q)<<endl;
                break;
            case 5:
                display(q);
                break;
            default :
                exit(0);
        }
    }
}