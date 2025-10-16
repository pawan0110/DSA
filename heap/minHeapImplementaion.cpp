#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> heap;

    int parent(int i) { return (i - 1) / 2; }
    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }

    void heapify(int i) {
        int l = left(i);
        int r = right(i);
        int smallest = i;

        if (l < heap.size() && heap[l] < heap[smallest])
            smallest = l;

        if (r < heap.size() && heap[r] < heap[smallest])
            smallest = r;

        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            heapify(smallest);
        }
    }

public:
    void initializeHeap() {
        heap.clear();
    }

    void insert(int key) {
        heap.push_back(key);
        int i = heap.size() - 1;

        // Fix the min-heap property
        while (i != 0 && heap[parent(i)] > heap[i]) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    void changeKey(int index, int new_val) {
        if (index < 0 || index >= heap.size())
            return;

        heap[index] = new_val;
        // If decreased, bubble up
        while (index != 0 && heap[parent(index)] > heap[index]) {
            swap(heap[index], heap[parent(index)]);
            index = parent(index);
        }
        // If increased, fix down
        heapify(index);
    }

    int extractMin() {
        if (heap.empty())
            return INT_MAX;

        if (heap.size() == 1) {
            int root = heap[0];
            heap.pop_back();
            return root;
        }

        int root = heap[0];
        heap[0] = heap.back();
        heap.pop_back();

        heapify(0);
        return root;
    }

    bool isEmpty() {
        return heap.empty();
    }

    int getMin() {
        if (heap.empty()) {
            cout << "Heap is empty!\n";
            return INT_MAX;
        }
        return heap[0];
    }

    int heapSize() {
        return heap.size();
    }

    void printHeap() {
        for (int val : heap)
            cout << val << " ";
        cout << "\n";
    }
};
