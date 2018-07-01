#include<iostream>
#include<stack>
#include<string>

using namespace std;
int prec(char c){
  if(c == '^') return 3;
  else if (c == '*' || c == '/') return 2;
  else if (c == '+' || c =='-') return 1;
  else return -1;
}

int main(){
  cout<<"\nEnter the expression : ";
  string exp;
  cin>>exp;
  stack<char> s;
  s.push('N');
  string ans;
  int l = exp.length();
  for(int i=0;i<l;i++){
    if(exp[i] >= 'a' && exp[i] <= 'z' || exp[i] >= 'A' && exp[i] <= 'Z')
      ans += exp[i];
    else if (exp[i]=='(')
      s.push('(');
    else if (exp[i]==')'){
      while(s.top()!='N' && s.top()!='('){
        char c = s.top();
        s.pop();
        ans += c;
      }
      if(s.top()=='('){
        s.pop();
      }
    }else{
      while(s.top()!='N' && prec(exp[i]) <= prec(s.top())){
        char c = s.top();
        s.pop();
        ans += c;
      }
      s.push(exp[i]);
    }
  }
  while(s.top()!='N'){
    char c = s.top();
    s.pop();
    ans += c;
  }
  cout<<ans<<endl;
}
