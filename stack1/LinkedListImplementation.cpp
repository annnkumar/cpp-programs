#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    
    Node(int val) : val(val), next(NULL) {} // Constructor to initialize val and next
};

class Stack {
public:
    Node* head;
    int count; // Renamed to avoid shadowing the size() method

    Stack() {
        head = NULL; // Correct initialization
        count = 0;
    }

    void push(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        count++;
    }

    void pop() {
        if (head == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp; // Free the memory
        count--;
    }

    int top() {
        if (head == NULL) {
            cout << "Stack is empty" << endl;
            return -1; // Indicating stack is empty
        }
        return head->val;
    }

    int size() {
        return count;
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
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << "Size of stack: " << st.size() << endl; // Output: 4
    st.display(); // Output: 40 30 20 10

    cout << "Top element: " << st.top() << endl; // Output: 40
    st.pop();
    cout << "Top element after pop: " << st.top() << endl; // Output: 30
    cout << "Size of stack after pop: " << st.size() << endl; // Output: 3
    st.display(); // Output: 30 20 10

    st.pop();
    st.pop();
    st.pop();
    st.pop(); // This will trigger "Stack is empty"
    return 0;
}
