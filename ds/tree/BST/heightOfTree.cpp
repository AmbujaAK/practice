#include<iostream>
#include<queue>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};

Node *getNewNode(int data){
  Node *newNode = new Node();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

Node *insert(Node *root,int data){
  if(root==NULL){
    root = getNewNode(data);
    return root;
  }
  else if(data <= root->data)
    root->left = insert(root->left,data);
  else
    root->right = insert(root->right,data);

  return root;
}

void display(Node *root){
  if(root==NULL) return;
  queue<Node*> q;
  q.push(root);

  while(!q.empty()){
    Node *curr = q.front();
    cout<<curr->data<<" ";
    if(curr->left)
      q.push(curr->left);
    if(curr->right)
      q.push(curr->right);
    q.pop();
  }
}
// calculation of height
int height(Node *root){
  if(root==NULL) return -1;
  int lh = height(root->left);
  int rh = height(root->right);

  return max(lh,rh)+1;
}

int main(){
  cout<<"\nEnter the number of nodes : ";
  int n;
  cin>>n;
  Node *root = NULL;
  while(n--){
    cout<<"\nEnter the element : ";
    int ele;
    cin>>ele;
    root = insert(root,ele);
  }
  cout<<"\nNodes are : ";
  display(root);
  cout<<"\nHeight of tree is : ";
  int h;
  h = height(root);
  cout<<h;

}
