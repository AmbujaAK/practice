#include<iostream>
using namespace std;

int main() {
	int num;
	cout<<"\nEnter the number :";
	cin>>num;
	int key = num /2;
	while(num>0){
		if (num <=key)
			cout<<"B";
		else
			cout<<"A";
		num--;
	}
}
