#include<iostream>
#include<stack>

using namespace std;

int main(){
  cout<<"\nEnter the expression only containg {},[] or () : ";
  string ex;
  cin>>ex;

  stack<char> s;
  int count=0;
  for(int i=0;i<ex.length();i++){
    if(ex[i]=='(' || ex[i]=='{' || ex[i]=='['){
      s.push(ex[i]);
      count++;
      //cout<<"stack : "<<s.top()<<"\ncount : "<<count<<endl;
    }
    else {
      //cout<<"\nnext :"<<ex[i];
      if(ex[i]=='}' && s.top()=='{'){
        s.pop();
        //cout<<"\ncount : "<<count;
        count--;
      }else if(ex[i]==')' && s.top()=='('){
        s.pop();
        count--;
      } else if(ex[i]==']' && s.top()=='['){
        s.pop();
        count--;
      }
      else{
        cout<<"not balanced"<<endl;
        break;
      }
    }
  }
  if(count==0)
    cout<<"balanced"<<endl;
}
