#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Deque {
public:
    Node* head;
    Node* tail;
    int size;

    Deque() {
        head = tail = NULL;
        size = 0;
    }

    void push_back(int val) {
        Node* temp = new Node(val);
        if (size == 0) head = tail = temp;
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void push_front(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    int front() {
        if (size == 0) {
            cout << "Deque is Empty!" << endl;
            return -1;
        }
        return head->val;
    }

    int back() {
        if (size == 0) {
            cout << "Deque is Empty!" << endl;
            return -1;
        }
        return tail->val;
    }

    void pop_front() {
        if (size == 0) return;
        Node* temp = head;
        if (size == 1) {
            head = tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }
        delete temp;
        size--;
    }

    void pop_back() {
        if (size == 0) return;
        Node* temp = tail;
        if (size == 1) {
            head = tail = NULL;
        } else {
            tail = tail->prev;
            tail->next = NULL;
        }
        delete temp;
        size--;
    }

    void deleteAtIndex(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid Index" << endl;
            return;
        }

        if (idx == 0) pop_front();
        else if (idx == size - 1) pop_back();
        else {
            Node* current = head;
            for (int i = 0; i < idx; i++) {
                current = current->next;
            }
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
            size--;
        }
    }
    
    int size1(){
      return size;
    }

    bool empty(){
      if(size==0) return true;
      else return false; 
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
    Deque dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.display();  // Output: 10 20 30

    dq.pop_front();
    dq.display();  // Output: 20 30

    dq.pop_back();
    dq.display();  // Output: 20

    dq.push_back(40);
    dq.push_back(50);
    dq.display();  // Output: 20 40 50

    

    return 0;
}
