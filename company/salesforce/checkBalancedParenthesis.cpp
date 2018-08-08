#include<iostream>
#include<stack>
using namespace std;

bool check(string ex){
    stack<char> s;
    char temp ;
    for(int i=0; i<ex.length(); ++i){
        if(ex[i] == '(' || ex[i] == '{' || ex[i] == '['){
            s.push(ex[i]);
        }
        if(s.empty())
            return false;
        switch (ex[i]){
            case ')' :
                temp = s.top();
                s.pop();
                if(temp == '{' || temp == '[')
                    return false;
                break;
            case '}' :
                temp = s.top();
                s.pop();
                if(temp == '(' || temp == '[')
                    return false;
                break;
            case ']' :
                temp = s.top();
                s.pop();
                if(temp == '(' || temp == '{')
                    return false;
                break;
        }
    }
    //cout<<"size :"<<s.size()<<endl;
    if(s.empty())
        return true;
    else
        return false;
}

int main(){
    cout<<"\nEnter the expression only with {}()[] :"<<endl;
    string ex;
    cin>>ex;

    if(check(ex))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
}