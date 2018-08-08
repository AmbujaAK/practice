/*
INPUT :
253
OUTPUT :
5
*/

#include<iostream>
#include<string>
#include<set>
#include<iterator>
using namespace std;

char getChar(string s,int n, int times){
  int len = s.length();
  int index = times%len;
   
  if(len == times)
	return s[s.length()-1];
  else
	return s[index-1];
}

char getUniqChar(int n,int times){
  string s;
  if(n==2){
  	s = "ABC";
    return getChar(s,n,times);
  }else if(n==3){
  	s = "DEF";
    return getChar(s,n,times);
  }else if(n==4){
  	s = "GHI";
    return getChar(s,n,times);
  }else if(n==5){
  	s = "JKL";
    return getChar(s,n,times);
  }else if(n==6){
  	s = "MNO";
    return getChar(s,n,times);
  }else if(n==7){
  	s = "PQRS";
    return getChar(s,n,times);
  }else if(n==8){
  	s = "TUV";
    return getChar(s,n,times);
  }else if(n==9){
  	s = "WXYZ";
    return getChar(s,n,times);
  }
}

int main(){
  string str;
  cin>>str;
	
  set<char> set;
  //set<char>::iterator iter;
  for(unsigned int i=0; i<str.length(); ++i){
	int num = str[i] - '0';
	//cout<<"num :"<<num<<endl;
    int times = 1;
    char x = getUniqChar(num,times);
    //cout<<"char :"<<x<<endl;
    set.insert(x);
  }
  
  for(unsigned int i=0; i<str.length()-1; ++i){
	int num = str[i+1] - '0';
    int times = str[i] - '0';
    //cout<<"num :"<<num<<"times :"<<times<<endl;
    char x = getUniqChar(num,times);
    //cout<<"char :"<<x<<endl;
    set.insert(x);
  }
  cout<<set.size();
}