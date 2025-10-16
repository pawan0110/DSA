#include<bits/stdc++.h>
using namespace std;

class Solution{
    vector<int> heap;

    int parent(int i) {
        return (i-1)/2;
    }
    int left(int i) {
        return (2*i+1);
    }
    int right(int i) {
        return (2*i+2);
    }

    void heapify(int i){
        int l = left(i);
        int r = right(i);
        int smallest = i;

        if(l < heap.size() && heap[i]<heap[smallest]) smallest = l;
        if(r < heap.size() && heap[r]<heap[smallest]) smallest = r;
        if(smallest != i){
            swap(heap[i],heap[smallest]);
            heapify(smallest);
        }
    }
    public:

        void initializeHeap(){
            heap.clear();
        }

        void insert(int key){
            heap.push_back(key);
            int i = heap.size()-1;

            while(i != 0 && heap[parent(i)] >heap[i]) {
                swap(heap[i],heap[parent(i)]);
                i = parent(i);
            }
              
        }

        void changeKey(int index, int new_val){
            if(index<0 || index>heap.size()) return ;
            heap[index] = new_val;
            while(index != 0 && heap[index]<heap[parent(index)]){
                swap[heap[index], heap[parent(index)]];
                index = parent(new_val);
            }
        }

        void extractMin(){
            if(heap.size()<= 0) return INT_MAX;
            if(heap.size()==1) return [--size];
            int root = heap[0];
            heap[0] = heap[--size];
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

 
};