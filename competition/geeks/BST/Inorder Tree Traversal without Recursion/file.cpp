#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *getNode(int data){
  struct node *newNode = new node();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}
/*
// level order insertion
struct node *insert(struct node *root,int data){
  queue<node*> q;
  q.push(root);

  while(!q.empty()){
    node *root = q.front();
    q.pop();

    if(!root->left){
      root->left = getNode(data);
      break;
    }else
      q.push(root->left);

    if(!root->right){
      root->right = getNode(data);
      break;
    }else
      q.push(root->right);
  }
  return root;
}

*/

// my answer of inserting
struct node *insert(struct node *root,int data){
  if(root==NULL){
    root = getNode(data);
    return root;
  }else{
    if(root->left==NULL)
      root->left = insert(root->left,data);
    else
      root->right = insert(root->right,data);
  }
  return root;
}

//inorder traversal using recursion
void qDisplay(node *root){
  if(root==NULL)
    return;

  queue<node*> q;
  q.push(root);

  while(!q.empty()){
    node *current = q.front();
    cout<<current->data<<" ";
    if(current->left!=NULL)
      q.push(current->left);
    if(current->right!=NULL)
      q.push(current->right);
    q.pop();
  }
}

//inorder traversal without using recursion
void sDisplay(node *root){
  if(root==NULL)
    return;

  stack<node*> s;
  node* current = root;
  bool done = 0;

  while(!done){
    if(current != NULL){
      s.push(current);
      current = current->left;
    }else{
      if(!s.empty()){
        current = s.top();
        s.pop();
        cout<<current->data<<" ";
        current = current->right;
      }else
        done = 1;
    }
  }
}

int main(){
  struct node *root = NULL;
  cout<<"\nEnter the number of nodes : ";
  int n;
  cin>>n;
  for(int i =0; i<n; i++){
    int num;
    cin>>num;
    root = insert(root,num);
    //insert(root,num);
    //display(root);
  }
  cout<<"\ncomplete tree Q: ";
  qDisplay(root);
  cout<<"\ncomplete tree S: ";
  sDisplay(root);
}
