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

class DLL {
public:
    Node* head;
    Node* tail;
    int size;

    DLL() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val) {
        Node* temp = new Node(val);
        if (size == 0) head = tail = temp;
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void insertAtBeginning(int val) {
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

    void insertAtIndex(int val, int idx) {
        if (idx < 0 || idx > size) {
            cout << "Invalid Index" << endl;
            return;
        }

        if (idx == 0) insertAtBeginning(val);
        else if (idx == size) insertAtEnd(val);
        else {
            Node* temp = new Node(val);
            Node* current = head;
            for (int i = 0; i < idx - 1; i++) {
                current = current->next;
            }
            temp->next = current->next;
            temp->prev = current;
            current->next->prev = temp;
            current->next = temp;
            size++;
        }
    }

    int getIdx(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid Index" << endl;
            return -1;
        }
        Node* temp = head;
        for (int i = 0; i < idx; i++) {
            temp = temp->next;
        }
        return temp->val;
    }

    void deleteAtHead() {
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

    void deleteAtTail() {
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

        if (idx == 0) deleteAtHead();
        else if (idx == size - 1) deleteAtTail();
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
    DLL dll;
    dll.insertAtTail(10);
    dll.insertAtTail(20);
    dll.insertAtTail(30);
    dll.display();  // Output: 10 20 30

    dll.deleteAtHead();
    dll.display();  // Output: 20 30

    dll.deleteAtTail();
    dll.display();  // Output: 20

    dll.insertAtTail(40);
    dll.insertAtTail(50);
    dll.display();  // Output: 20 40 50

    dll.deleteAtIndex(1);
    dll.display();  // Output: 20 50

    return 0;
}
