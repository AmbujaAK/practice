#include<iostream>
#include<stack>
#include<string>
using namespace std;

int solve(string s){
    stack<int> stack;

    if(!stack.empty())
        return -1;
    
    for(int i=0; i<s.length(); ++i){
        if(s[i] == ' ')
            continue;
        else if(isdigit(s[i])){
            int x = 0;
            // finding number digit by digit
            while(isdigit(s[i])){ 
                x = x * 10 + (int)(s[i]-'0');
                i++;
            }
            i--;
            stack.push(x);
        } else {
            int v1 = stack.top();
            stack.pop();
            int v2 = stack.top();
            stack.pop();
            int cal = 0;
            switch(s[i]){
                case '+':
                    cal = v2 + v1;
                    stack.push(cal);
                    break;
                case '-':
                    cal = v2 - v1;
                    stack.push(cal);
                    break;
                case '*':
                    cal = v2 * v1;
                    stack.push(cal);
                    break;
                case '/':
                    cal = v2 / v1;
                    stack.push(cal);
                    break;
            }
        }
    }
    return stack.top();
}

int main(){
    int t;
    cin>>t;
    // dummy string to take input in multiple line using getline();
    string x;
    getline(cin,x);
    
    for(int i=1; i<=t; i++){
        string str;
        getline(cin,str);
        
        int ans = solve(str);
        cout<<"case #"<<i<<" "<<ans<<endl;
    }
    return 0;
}