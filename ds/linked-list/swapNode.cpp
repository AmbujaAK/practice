#include<iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

struct Node *head = NULL;

struct Node* insert(int x){
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = x;
  newNode->next = head;
  head = newNode;

  return head;
}
void display(){
  struct Node *temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

void swap(int x,int y){

  if(x==y) return;

  struct Node *prevX=NULL,*currX=head;
  while(currX && currX->data != x){
    prevX = currX;
    currX = currX->next;
  }
  struct Node *prevY=NULL, *currY=head;
  while(currY && currY->data != y){
    prevY = currY;
    currY = currY->next;
  }

  // if x and/or is not present in List
  if(currX == NULL || currY == NULL)
      return;

  // if x is not head
  if(prevX != NULL)
    prevX->next = currY;
  else
    head = currY;
  // if y is not head
  if(prevY != NULL)
    prevY->next = currX;
  else
    head = currX;

  struct Node *temp = currY->next;
  currY->next = currX->next;
  currX->next = temp;
}

void reverse(){
  struct Node *prev = NULL,*curr = head,*after = NULL;
  while(curr!=NULL){
    after = curr->next;
    curr->next = prev;
    prev = curr;
    curr = after;
  }
  head = prev;
}

int main(){
  int t;
  cout<<"\nEnter the number of elements : ";
  cin>>t;

  while(t--){
    int num;
    cout<<"\nEnter the data : ";
    cin>>num;
    insert(num);
    display();
  }

  cout<<"\nEnter the two number to be swapped : ";
  int x,y;
  cin>>x>>y;
  swap(x,y);
  display();

  reverse();
  cout<<"\nReversed linked list : ";
  display();
}
