//kth smallest element in a array
#include<bits/stdc++.h>
using namespace std;
    
    void heapify(vector<int>& heap, int i, int n){
        int left = 2*i+1;
        int right = 2*i+2;
        int largest = i;

        if(left <n && heap[left]>heap[largest]) largest=left;
        if(right<n && heap[right]>heap[largest]) largest = right;

        if(largest != i){
            swap(heap[i], heap[largest]);
            heapify(heap,largest,n);
        }

    }
    void buildHeap(vector<int>& heap){
        int n = heap.size();
        for(int i=n/2-1; i>=0; i--){
            heapify(heap,i,n);
        }
    }



    int findKthsmallest(vector<int>& nums, int k) {
        vector<int> heap(nums.begin(), nums.begin()+k);
        buildHeap(heap);

        for(int i=k; i<nums.size(); i++){
            if(nums[i]<heap[0]){
                heap[0]=nums[i];
                heapify(heap,0,k);
            }
        }
        return heap[0];
     
    }

// Complexity

// Time: O(n log k) → build heap O(k) + process (n-k) elements, each heapify O(log k)

// Space: O(k) → heap of size k




int findKthsmallest(vector<int>& nums, int k) {
     priority_queue<int> pq;
     
     for(int i=0; i<nums.size(); i++){
        pq.push(nums[i]);
        if(pq.size() > k) pq.pop();
     }
     return pq.top();
     
}