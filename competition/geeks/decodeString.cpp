#include<bits/stdc++.h>
using namespace std;

string decode(string str){
    stack<char> sC;
    stack<int> sI;
    
    string ans = "",temp="";
    for(int i=0; i<str.length(); i++){
        //cout<<"check ..."<<endl;
        int count = 0;
        if(str[i] >= '0' && str[i] <= '9'){
            while(str[i] >= '0' && str[i] <= '9'){
                count = count * 10 + str[i] - '0';
                i++;
            }
            i--;
            sI.push(count);
            //cout<<"stack : "<<sI.top()<<endl;
        }
        else if (str[i] == ']'){
            count = 0;
            temp = "";
            
            if(!sI.empty()){
                count = sI.top();
                sI.pop();
            }
            //cout<<"count : "<<count<<endl;
            while(!sC.empty() && sC.top() != '['){
                temp = sC.top() + temp;
                //cout<<"top :"<<sC.top()<<endl;
                sC.pop();
            }
            //cout<<"char :"<<temp<<endl;
            if(!sC.empty() && sC.top() == '['){
                sC.pop();
            }
            //cout<<"ans :"<<ans<<endl;
            for(int j=0; j<count; j++)
                ans = ans + temp;
            //cout<<"ans : "<<ans<<endl;
            
            for(int j=0; j<ans.length(); j++)
                sC.push(ans[j]);
            ans = "";
        }
        else if(str[i] == '['){
            if(str[i-1] >= '0' && str[i-1] <= '9')
                sC.push(str[i]);
            else{
                sC.push(str[i]);
                sI.push(1);
            }
        }
        else{
            sC.push(str[i]);
        }
    }
    while(!sC.empty()){
        ans = sC.top() + ans ;
        sC.pop();
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        cout<<decode(str)<<endl;
    }
    return 0;
}