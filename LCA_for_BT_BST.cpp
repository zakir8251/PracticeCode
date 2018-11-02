#include <bits/stdc++.h>
using namespace std;


typedef struct Node{
  int data;
  Node* left;
  Node* right;
}Node;

//Assumption keys are present in the tree
//Returns the LCA
Node* BST_lca(Node* root, int x, int y){
  
  //TBD Base cases
  
  if(root == NULL)
    return NULL;
  
  if(x < root->data && y < root->data) //Focus Left
    return BST_lca(root->left, x, y);


  if(x > root->data && y > root->data) //Focus Right
    return BST_lca(root->right, x, y);
    
  return root;
  
}

//Assumption keys are present in the tree
//Returns a node where any of the keys is found

Node* lca_keys_present(Node* root, int x, int y){
  
  //TBD Base cases
  
  if(root == NULL)
    return NULL;
  
  if(root->data == x || root->data == y) //Returns a node where any of the keys is found
    return root;


  Node* leftResult = lca_keys_present(root->left, x, y);
  Node* rightResult = lca_keys_present(root->right, x, y);

  if(leftResult && rightResult) //Both non null indicates we are on LCA i.e keys are on either side
    return root;

  return leftResult? leftResult : rightResult; //The non-null one contains the LCA
}

//Both keys may or may not be in the tree

typedef pair<Node*, int> result;

result lca(Node* root, int x, int y){
  
  //TBD Base cases
  if(root == NULL)
    return {NULL, 0};

  result leftResult = lca(root->left, x, y);
  if(leftResult.first !=NULL) //LCA on left sub tree
    return leftResult;
  
  result rightResult = lca(root->right, x, y);
  if(rightResult.first !=NULL) //LCA on right sub tree
    return rightResult;  
  
  
  if(leftResult.second == 1 && rightResult.second == 1) //This is the LCA
    return {root, 2};
  
  if(root->data == x || root->data == y){
    if(leftResult.second == 1 || rightResult.second == 1)
      return{root, 2}; //This is the LCA (parent-childreln)
    
    return {NULL, 1};
  }
  
  result q(NULL, 0);
  return {NULL,0}; //TBD final check
  
}

int main() {
  cout<<"Hello!"<<endl;
  
  Node* a;
  BST_lca(a, 10, 20);
  
  lca(a, 10, 20);

  return 0;
}
