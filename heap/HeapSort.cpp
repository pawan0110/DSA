#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>& arr, int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[largest]) largest = left;
    if(right < n && arr[right] > arr[largest]) largest = right;

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& nums){
    int n = nums.size();

    for(int i=n/2-1; i>=0; i-- ){
        heapify(nums,n,i);
    }

    for(int i=n-1; i>=0; i--){
        swap(nums[0],nums[i]);
        heapify(nums,i,0);
    }
}

// Time: O(n log n) (building heap + n extractions)

// Space: O(1) (in-place)

// Stable: No (Heap Sort is not stable)