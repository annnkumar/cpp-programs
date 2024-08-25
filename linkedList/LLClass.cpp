#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtbeggning(int val){
       Node*temp = new Node(val);
       if(size==0){head = temp = tail;}
       else{
            // temp = head;
            // head = head->next;
            temp->next = head;
            head = temp;
       }
       size++;
    }
    void insertAtIndex(int val, int idx){

       Node*temp = new Node(val);
       if(idx<0 || idx > size){
         cout<<"Ivalid Index"<<endl;
         return;
       }
       if(idx == 0) insertAtbeggning(val);
       else if (idx==size)
       {
            insertAtEnd(val);
       }
       
       else if(size==0){head = temp = tail;}

       else{
          
          Node* t= new Node(val);
          Node* temp = head;
          for(int i = 1; i<= idx -1; i++){
            temp = temp->next;
          }
          t->next = temp->next;
          temp->next  = t;
          size++;
            
       }
    }
    int getIdx(int idx){
      if(idx< 0 || idx>= size){
          cout<<"Invalid Index";
          return -1;
      }
      else if(idx==0) return head->val;
      else if(idx==size-1) return tail->val;
      else {
             Node* temp = head;
          for(int i = 1; i<= idx -1; i++){
            temp = temp->next;
          }
          temp->val;
      }
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtbeggning(90);

    ll.insertAtIndex(67,3);
    ll.display();

    return 0;
}
