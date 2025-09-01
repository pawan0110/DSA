#define MAX 100

class ArrayStack {
private:
    int arr[MAX];
    int topIndex;  // Avoid conflict with method name "top"

public:
    ArrayStack() {
        topIndex = -1; // Stack starts empty
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == MAX - 1;
    }

    void push(int x) {
        if (isFull()) {
         //   cout << "Stack overflow" << endl;
            return;
        }
        arr[++topIndex] = x;
    }

    int pop() {
        if (isEmpty()) {
           // cout << "Stack underflow" << endl;
            return -1; // Return a default value
        }
        return arr[topIndex--];
    }

    int top() {
        if (isEmpty()) {
        //    cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[topIndex];
    }
};