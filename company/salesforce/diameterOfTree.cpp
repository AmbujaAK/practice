//#include<iostream>
#include <bits/stdc++.h>
#include "getTree.cpp"

using namespace std;

int height(Node* root){
    if(root = NULL)
        return 0;

    return 1 + max(height(root->left), height(root->right));
}

int diameter(Node* root){
    if(root == NULL)
        return 0;

    int lHeight = height(root->left);
    int rHeight = height(root->right);

    int lDiameter = diameter(root->left);
    int rDiameter = diameter(root->right);

    return max(lHeight + rHeight + 1, max(lDiameter,rDiameter));
}

int main(){
    Node* root = NULL;
    root = tree(root);
    display(root);
    int ans = diameter(root);
    cout<<ans<<endl;
}