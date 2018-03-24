#include<iostream>
using namespace std;

int checkPrime(int p){
	int flag =0,prime;
	if (p==1 || p==0)
		cout<<"Niether a prime nor a composite number";
	if (p==2)
		flag = 1;
	for(int i=2;i<p;i++){
		if(p%i==0){
			flag = 0;
			break;
		}
		else{
			prime=i;
			flag = 1;
		}
	}
	/*
	if (flag==1)
		cout<<"True";
	else
		cout<<"False";
	*/
	return prime;
}

int main(){
	cout<<"Enter any number :";
	int num;
	cin>>num;
	int count=0;
	checkPrime(num);
	int l,r;
	cout<<"Enter the range :";
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		int c = checkPrime(l);
		
		cout<<"Prime numbers are :"<<c;
	}

	//cout<<"Total count is :"<<count;
	return 0;
}
