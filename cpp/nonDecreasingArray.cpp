#include<iostream>
#include<queue>
using namespace std;

struct Node {
  int data;
  struct Node *left, *right;
};

struct Node *getNode(int data){
  struct Node *newNode = new Node;
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct Node *insert(struct Node *root,int data){
  if(root==NULL){
    root = getNode(data);
    return root;
  }else{
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
      struct Node *temp = q.front();
      q.pop();
      if(!temp->left){
        temp->left = getNode(data);
        break;
      }else{
        q.push(temp->left);
      }

      if(!temp->right){
        temp->right = getNode(data);
        break;
      }else{
        q.push(temp->right);
      }
    }
  }
}

void inorder(struct Node *root){
  if(root==NULL)
    return ;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
int main(){
  struct Node *root = NULL;
  cout<<"\nEnter the number of nodes in tree : ";
  int n;
  cin>>n;
  while(n--){
    cout<<"\nEnter the data : ";
    int d;
    cin>>d;
    root = insert(root,d);
  }
  inorder(root);
}
