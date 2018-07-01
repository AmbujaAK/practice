#include<iostream>
using namespace std;

class sample{
	private:
		int x;
		void read();
		void write();
	public:
		void update();
		void show();
};
void sample:: write(){
	string s;
	cout<<"\nYou can write anything you want :";
	cin>>s;
}
void sample:: show(){
	read();
}
void sample:: read(){
	cout<<"\nNow you can read me.";
}
void sample:: update(){
	write();
}

int main(){
	sample s;
	s.update();
	s.show();

	return 0;
}
