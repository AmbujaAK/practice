#include<iostream>
#include<cmath>
using namespace std;

void celign:center;
}
h1{
		color:blue;
}
#content{
	  font-size: 25px;
}
ck(int num){
	int a = num%10;
	int b = num/10;
	int count=1;
	while(b!=0){
		count++;
		int temp = b;
		a = temp % 10;
		b = temp / 10;
	}

	//cout<<"\nCount :"<<count;
	a = num%10;
	b = num/10;
	int sum =0;
	for(int i=0; i<count;i++){
		int temp = b;
		//cout<<"\n......"<<a;
		sum += pow(a,count);
		//cout<<"\n..."<<sum;
		a = temp % 10;
		b = temp / 10;
	}

	cout<<"\nSum is :"<<sum;
	if (sum == num)
		cout<<"\nArmstrong number";
	else
		cout<<"\nInvalid";
}
int main(){
	int num;
	cout<<"Enter any number :";
	cin>>num;

	check(num);

	return 0;

}
