#include<iostream>
#include<queue>
#include<stack>
using namespace std;

struct bstNode {
  int data;
  bstNode *left;
  bstNode *right;
};

bstNode *getNewNode(int data){
  bstNode *newNode = new bstNode();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}
bstNode *insert(bstNode* root ,int data){
  if(root == NULL){
    root = getNewNode(data);
    return root;
  }else if(data <= root->data)
    root->left = insert(root->left,data);
  else
    root->right = insert(root->right,data);
  return root;
}
void leveOrderTraversal(bstNode* root){
  if(root==NULL) return;
  queue<bstNode*> q;
  q.push(root);
  while(!q.empty()){
    bstNode *curr = q.front();
    cout<<curr->data<<" ";
    if(curr->left!=NULL)
      q.push(curr->left);
    if(curr->right!=NULL)
      q.push(curr->right);
    q.pop();
  }
}
void preorder(bstNode *root){
  if(root==NULL) return;
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
void inorder(bstNode *root){
  if(root==NULL) return;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
void postorder(bstNode *root){
  if(root==NULL) return;
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}
// iterative inorder
void iterativeInorder(bstNode *root){
  cout<<"\nIterative inorder : ";
  if(root==NULL)
    return;
  stack<bstNode*> s;

  while(!s.empty()){
    if(root!=NULL){
      s.push(root);
      root = root->left;
    }else{
      if(s.empty())
        break;
      root = s.top();
      s.pop();
      cout<<root->data<<" ";
      root = root->right;
    }
  }
}
bool isSubTreeLesser(bstNode *root,int data){
  if(root==NULL) return true;
  if(root->data <= data && isSubTreeLesser(root->left,data) && isSubTreeLesser(root->right,data))
    return true;
  else
    return false;
}
bool isSubTreeGreater(bstNode *root,int data){
  if(root==NULL) return true;
  if(root->data > data && isSubTreeGreater(root->left,data) && isSubTreeGreater(root->right,data))
    return true;
  else
    return false;
}

bool isBST(bstNode *root){
  if(root==NULL) return true;
  if(isSubTreeLesser(root->left,root->data)
      && isSubTreeGreater(root->right,root->data)
      && isBST(root->left)
      && isBST(root->right))
    return true;
  else
    return false;
}
/*
// delete operation
void delete(Node *root){
  if(root==NULL)
    return;
  delete()
}*/
int main(){
  cout<<"\nEnter the size of tree : ";
  int n;
  cin>>n;
  bstNode *rootPtr = NULL;
  for(int i=0;i<n;i++){
    int num;
    cin>>num;
     rootPtr = insert(rootPtr,num);
  }

  cout<<"\nLevel Order Traversal : ";
  leveOrderTraversal(rootPtr);

  cout<<"\nPreorder Traversal : ";
  preorder(rootPtr);

  cout<<"\nInorder Traversal : ";
  inorder(rootPtr);
  iterativeInorder(rootPtr);

  cout<<"\nPostorder Traversal : ";
  postorder(rootPtr);

  cout<<"\nIs the given tree BST ? : ";
  cout<<isBST(rootPtr);
}
