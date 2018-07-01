#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
struct Node* head = NULL;

Node* insert(int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = head;
	head = newNode;	
	return head;
}
void reverse(struct Node* prev, struct Node* cur){
	if(cur){
		reverse(cur,cur->next);
		cur->next = prev;
	}
	else
		head = prev;
}
void display(){
	struct Node* temp = head;
	while(temp){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
void displayR(struct Node* head){
	struct Node* temp = head;
	if(temp){
		displayR(temp->next);
		cout<<temp->data<<" ";
	}
}
int main(){
	int num,t;
	cout<<"\nEnter the number of elements :";
	cin>>t;
	while(t){
		cin>>num;
		insert(num);
		t--;
	}
	cout<<"\nOriginal list :";
	display();
	cout<<"\nReversed list :";
	Node* cur = head;
	reverse(NULL,cur);
	display();
	cout<<"\nReverse Reversed List is :";
	displayR(head);
	return 0;
}
