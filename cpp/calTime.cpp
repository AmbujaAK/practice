#include<iostream>
#include<ctime>
using namespace std;

int main(){
	int start_s=clock();
	// the code you wish to time goes here
	cout<<"Hello, world";
	int stop_s=clock();
	cout << "\ntime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 <<"sec"<< endl;
	
	return 0;
}
