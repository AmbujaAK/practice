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

//morris traversal preorder
void morrisTraversalPreorder(Node *root){
  Node *curr = root;
  while(curr!=NULL){
    if(curr->left==NULL){
      cout<<curr->data<<" ";
      curr = curr->right;
    }else{
      Node *predecessor = curr->left;
      while(predecessor->right!=NULL && predecessor->right!=curr)
        predecessor = predecessor->right;

      if(predecessor->right==NULL){
        predecessor->right = curr;
        curr = curr->left;
      }else{
        predecessor->right = NULL;
        cout<<curr->data<<" ";
        curr = curr->right;
      }
    }
  }
}

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

int main(){
  cout<<"\nEnter the number of nodes of the tree : ";
  int n;
  cin>>n;
  Node *root = NULL;
  while(n--){
    cout<<"\nEnter the elements : ";
    int num;
    cin>>num;
    root = insertNode(root,num);
    display(root);
  }
  cout<<endl;
  cout<<"\nComplete tree : ";
  //display(root);
  morrisTraversalPreorder(root);
}
