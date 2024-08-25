#include <iostream>
#include<vector>
#include <queue>
using namespace std;
class Node{
    public:
      int val;
      Node*left;
      Node*right;
      Node(int val){
         this->val = val;
      }
};
void inorder(Node*root , vector<int> &dec){
      if(root==NULL) return;
      inorder(root->right,dec);
      dec.push_back(root->val);
      inorder(root->left,dec);


}
void print(vector<int> arr){
      for(int i =0; i< arr.size(); i++){
            cout<<arr[i]<<" ";
      }
}
void preorder(Node*root, vector<int>&arr, int &i){
  if(root==NULL) return;
  root->val = arr[i++];
  preorder(root->left , arr, i);
  preorder(root->right , arr, i);
}
void levelOrderQueue(Node*root){
      queue<Node*> q;
      q.push(root);
      while(q.size()>0){
            Node*temp = q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
      }
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);
    
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;


      vector<int> dec;// reverse in order;
      inorder(a,dec);
      levelOrderQueue(a);
      cout<<endl;
      for(int i =0; i< dec.size(); i++){
            cout<<dec[i]<<" ";
      }
      cout<<endl;
      int i = 0;
      preorder(a,dec,i);
      levelOrderQueue(a);

      return 0;

}


/*#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>  
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) : val(val), left(NULL), right(NULL) {}
};

void inorder(Node* root, vector<int>& dec) {
    if (root == NULL) return;
    inorder(root->left, dec);   // Change this line to left-root-right for standard inorder
    dec.push_back(root->val);
    inorder(root->right, dec);
}

void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

void preorder(Node* root, vector<int>& arr, int& i) {
    if (root == NULL) return;
    root->val = arr[i++];
    preorder(root->left, arr, i);
    preorder(root->right, arr, i);
}

void levelOrderQueue(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left != NULL) q.push(temp->left);
        if (temp->right != NULL) q.push(temp->right);
    }
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);

    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;

    vector<int> dec;  // Correct order for Max Heap
    inorder(a, dec);
    reverse(dec.begin(), dec.end());  // Max-Heap requires largest values
    levelOrderQueue(a);
    cout << endl;
    print(dec);
    cout << endl;
    int i = 0;
    preorder(a, dec, i);
    levelOrderQueue(a);

    return 0;
}
*/