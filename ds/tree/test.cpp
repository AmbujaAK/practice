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
// height calculation
int height(struct Node *root){
  if(root==NULL)
    return 0;
  else {
    int lh = height(root->left);
    int rh = height(root->right);

    if(lh > rh)
      return lh+1;
    else
      return rh+1;
  }
}
// display level by level
void printGivenLevel(struct Node *root,int level){
  if(root==NULL)
    return;
  if(level==1)
    cout<<root->data<<" ";
  else if (level > 1){
    printGivenLevel(root->left,level-1);
    printGivenLevel(root->right,level-1);
  }
}
void printLevelOrder(Node *root){
  int h = height(root);

  for(int i=1; i<=h; i++)
    printGivenLevel(root,i);
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
    //display(root);
  }
  cout<<endl;
  cout<<"\nComplete tree : ";
  display(root);
  cout<<"\nLevel : ";
  printLevelOrder(root);
}
