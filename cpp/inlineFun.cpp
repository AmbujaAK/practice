#include<iostream>
#include<ctime>
using namespace std;

int start = clock();
inline int sqr(int num){
	return num*num;
}
int stop = clock();
int main(){
	int num,res;
	cout<<"Enter any number :";
	cin>>num;
	//int start_s=clock();
	res = sqr(num);
	//int stop_s=clock();
	cout<<"\nSquare of Number is :"<<res;
	cout<<"\nTime calculation : "<<(stop-start)/double(CLOCKS_PER_SEC)*10000<<endl;
	return 0;
}
