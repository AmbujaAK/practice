#include<iostream>
using namespace std;

struct node {
	int data;
	struct node* next;
};

node* head;
int main(){
	node* newNode = new node();
	//	head = newNode;
	newNode->data = 10;
	newNode->next = NULL;

	cout<<"Node 1 :"<<newNode->data;

	return 0;
}
