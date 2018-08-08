#include<iostream>
#include<stack>
using namespace std;

int solve(string ex){
    stack<char> s;
    char temp ;
    int count = 0;
    for(int i=0; i<ex.length(); ++i){
        cout<<"input : "<<ex[i]<<endl;
        if(ex[i] == '(' || ex[i] == '{' || ex[i] == '['){
            s.push(ex[i]);
        }
        else if ((ex[i] >= 65 && ex[i] <= 90) || (ex[i] >= 97 && ex[i] <= 122)){
            //cout<<"check "<< i <<" :"<<s.size()<<"--"<<count<<endl;
            if(!s.empty())
                while(!s.empty())
                    s.pop();
        }
        /*
        if(s.empty())
            return count;
        */
        //cout<<"check "<< i <<" :"<<s.size()<<"--"<<count<<endl;
        switch (ex[i]){
            case ')' :
                if(!s.empty()){
                    temp = s.top();
                    s.pop();
                cout<<"check "<< i <<" :"<<temp<<"--"<<count<<endl;
                }
                else
                    count--;
                if(temp == '{' || temp == '['){
                    if(!s.empty())
                        while(!s.empty())
                            s.pop();
                }else
                    count++;
                break;
            
            case '}' :
                if(!s.empty()){
                    temp = s.top();
                    s.pop();
                }else
                    count--;
                if(temp == '(' || temp == '['){
                    if(!s.empty())
                        while(!s.empty())
                            s.pop();
                }else
                    count++;
                break;

            case ']' :
                if(!s.empty()){
                    temp = s.top();
                    s.pop();
                    count++;
                }
                else
                    count--;
                if(temp == '(' || temp == '{'){
                    if(!s.empty())
                        while(!s.empty())
                            s.pop();
                }
                else
                    count++;
                break;
        }
    }
    //cout<<"size :"<<s.size()<<endl;
    /*
    if(s.empty())
        return true;
    else
        return false;
    */
    return count;
}

int main(){
    cout<<"\nEnter the expression only with {}()[] :"<<endl;
    string ex;
    cin>>ex;

    int ans = solve(ex);
    cout<<ans<<endl;
}