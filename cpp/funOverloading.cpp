#include<iostream>
using namespace std;

void cal(int a){
	cout<<"\nInteger :"<<a;
}
void cal(double a){
	cout<<"\nDouble integer :"<<a;
}

int main(){
	cout<<"Enter integer and double number :";
	int i;
	double d;
	cin>>i>>d;
	cal(i);
	cal(d);

	return 0;
}
