#include<iostream>
#include<queue>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};

Node *getNode(int data){
  Node *newNode = new Node();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// bst way
Node *insertNode(Node *root,int data){
  if(root==NULL){
    root = getNode(data);
    return root;
  }else if(data <= root->data)
    root->left = insertNode(root->left,data);
  else
    root->right = insertNode(root->right,data);

  return root;
}
// level order traversal
void display(Node *root){
  if(root==NULL) return;

  queue<Node*> q;
  q.push(root);

  while(!q.empty()){
    Node *curr = q.front();
    cout<<curr->data<<" ";
    if(curr->left!=NULL)
      q.push(curr->left);
    if(curr->right!=NULL)
      q.push(curr->right);
    q.pop();
  }
}
Node* tree(Node* root){
  //cout<<"\nEnter the number of nodes of the tree : ";
  int n;
  cin>>n;
  //Node *root = NULL;
  while(n--){
    int num;
    cin>>num;
    root = insertNode(root,num);
  }
  return root;
}
