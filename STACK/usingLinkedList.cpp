#include <iostream>
using namespace std;

class LinkedListStack {
    struct Node {
        int data;
        Node* next;
    };

    Node* top; // Pointer to top of stack

public:
    LinkedListStack() {
        top = nullptr;
    }

    void push(int x) {
        Node* newnode = new Node();
        newnode->data = x;
        newnode->next = top;
        top = newnode;
        cout << x << " pushed onto the stack." << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;
            return -1;
        }
        Node* temp = top;
        top = top->next;
        int val = temp->data;
        delete temp;
        return val;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};
