#include<iostream>
#include<cmath>
using namespace std;

int check(int num){
  int c=0;
  int r;
  while(num>0){
    r = num % 10;
    num = num / 10;
    c++;
  }
  return c;
}
int reverse(int num,int c){
  int rev=0,temp;
  while(num!=0){
    temp=num%10;
		rev=rev*10+temp;
		num=num/10;
	}
  return rev;
}
int main(){
  int num;
  cout<<"\nEnter any number : ";
  cin>>num;
  int count ;
  count = check(num);
  //cout<<"\nNumber of digit is : "<<count<<endl;
  cout<<"\nReversed digit is : ";
  int ans;
  ans = reverse(num,count);
  cout<<ans;
}
