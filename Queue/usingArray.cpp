#include <iostream>
using namespace std;

class ArrayQueue
{
    int front, rear, size, capacity;
    int *arr;

public:
    ArrayQueue(int c)
    {
        capacity = c;
        arr = new int[c];
        front = size = 0;
        rear = c - 1;
    }

    void push(int x)
    {
        if (isFull())
        {
            cout << "Queue overflow!" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Queue underflow!" << endl;
            return -1;
        }
        int item = arr[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }
};