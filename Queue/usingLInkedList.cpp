#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}  
};

class QueueLinkedList {
    Node *front, *rear;

public: 
    QueueLinkedList() {
        front = rear = nullptr;
    }

    void enqueue(int x) {
        Node* temp = new Node(x);
        if (rear == nullptr) {  // Empty queue
            front = rear = temp;
            return;
        }
        rear->next = temp;  
        rear = temp;        
    }

    int dequeue() {
        if (is_empty()) return -1; 

        Node* temp = front;
        front = front->next;  

        if (front == nullptr) rear = nullptr; 

        int val = temp->data;
        delete temp;
        return val;
    }

    bool is_empty() {
        return front == nullptr;  
    }

    int getFront() {
        return is_empty() ? -1 : front->data;
    }
};


