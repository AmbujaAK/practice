#include<iostream>
#include<string>
#include<list>
using namespace std;

int main(){
  string s1,s2,s3,s4;
  cout<<"Enter string s1 and s2 :";
  cin>>s1>>s2;
  cout<<"\nstring S1 : "<<s1;
  cout<<"\nstring S2 : "<<s2<<endl;

  // how to copy a string into a char Array.
  char arr[s1.length()+1];
  char *p;
  p = arr;
  cout<<"\nString s1 is copied to char arr[100] : ";
  s1.copy(p,s1.length(),0);
  s1.copy(arr,s1.length(),0);
  cout<<"\ncopied string (p): "<<p<<endl;
  cout<<"\ncopied string (arr): "<<arr<<endl;


  if(s1.compare(s2) == 0)
    cout<<s1<<" is equals to "<<s2<<endl;
  else
    cout<<s1<<" is not equals to "<<s2<<endl;

  cout<<"Enter a string for POP() operation :"<<endl;
  string st;
  cin>>st;
  st.pop_back();
  cout<<"After poping a char : "<<st<<endl;

  cout<<"\nEnter a char to push into above string :";
  char x;
  cin>>x;
  string t;
  t = st + x;
  st.push_back(x);
  cout<<"\nAfter pushing back : "<<st<<endl;
  cout<<"\nAfter pushing back : "<<t<<endl;
/*
  cout<<"\nEnter another string S3 : ";
  cin>>s3;
  s4 = s1.append(s3);

  cout<<"\nNew string s1+s3 : "<<s4;

  string s5 (s4.begin(),s4.begin()+5);
  cout<<"\nsubstring is : "<<s5;

  string s6 (10,'*');
  string s7 (10,'#');
  cout<<"\n10 times * :"<<s6;
  s6.append(s7);
  cout<<"\n20 times symbol : "<<s6;

  string s8;
  s8.assign(s6);
  cout<<"\nstring s8 : "<<s8;
  cout<<"\ncharacter at position 5 : "<<s8.at(0);
  s6 += '*';
  cout<<"\nstring s6 is appended with 'A' : "<<s6;
*/
}
