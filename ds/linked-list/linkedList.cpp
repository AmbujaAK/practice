#include<iostream>
using namespace std;

struct node {
	int data;
	node* next;
};
node* head = NULL;

node* insert(){
	
}

void del(){

}

void display(){

}
int main(){
	cout<<"\n*****LINKED LIST*****";
	cout<<"\n1 : Insert";
	cout<<"\n2 : Delete";
	cout<<"\n3 : Display";

	cout<<"\nChoose any of the following";
	int ch;
	cin>>ch;
	switch(ch){
		case 1 : insert();
			 break;
		case 2 : del();
			 break;
		case 3 : display();
			 break;
		default : cout<<"\nError in input, TRY AGAIN !!";

	}
}
