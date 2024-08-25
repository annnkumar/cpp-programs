#include <iostream>
#include<stdlib.h>
using namespace std;

class Node{ 
public:
int val;
Node* left;
Node* right;
Node(int val){
this->val = val;
this->left = NULL;
this->right = NULL;
}
};

int findMin(Node*root){
      if(root==NULL) return INT_MAX;
      int res = root->val;
      int lres = findMin(root->left);
      int rres  = findMin(root->right);

      if(lres<rres) return lres;
      if(rres<lres) return rres;

      return res;
}
int main(){
Node* NewRoot = NULL;
Node* root = new Node(2);
root->left = new Node(7);
root->right = new Node(5);
root->left->right = new Node(6);
root->left->right->left = new Node(1);
root->left->right->right = new Node(11);
root->right->right = new Node(9);
root->right->right->left = new Node(4);
cout << "Minimum element is " << findMin(root) << endl;
return 0;
}