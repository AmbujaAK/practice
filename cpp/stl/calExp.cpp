#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
  cout<<"\nEnter the expression : ";
  string exp;
  cin>>exp;

  stack<int> s;

  for(int i=0;i<exp.length();i++){
    if(isdigit(exp[i]))
      s.push(exp[i]-'0');
    else{
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        switch(exp[i]){
          case '+': s.push(b+a); break;
          case '-': s.push(b-a); break;
          case '*': s.push(b*a); break;
          case '/': s.push(b/a); break;
        }
    }
  }
  cout<<"\nAnswer : "<<s.top()<<endl;
}
