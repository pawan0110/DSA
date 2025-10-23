#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         int n = nums.size();
//         for(int i=(n-2)/2; i>=0; i--){
//           maxHeapify(nums,n,i);
//         } 

//         for(int i=0; i<k-1; i++){
//             swap(nums[0],nums[n-1-i]);
//             maxHeapify(nums,n-1-i,0);
//         }
//         return nums[0];

// }
//     void maxHeapify(vector<int>& nums, int n, int i){
//         int left = 2*i+1;
//         int right = 2*i+2;
//         int parent = (i-1)/2;

//         int largest = i;
//         if(left < n && nums[left]>nums[largest])
//          largest = left;
//         if(right <n && nums[right]>nums[largest])
//          largest = right;
//         if(largest != i){
//           swap(nums[largest],nums[i]);
//           maxHeapify(nums,n,largest);
//         }

//     }
// };
//tc = (O(n  + klogn)
//sc = 0(n)


//without stl function...........
//better---------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
    void heapify(vector<int>& nums, int i, int n){
        int left = 2*i+1;
        int right = 2*i+2;
        int smallest = i;

        if(left <n && nums[left] < nums[smallest]) smallest = left;
        if(right < n && nums[right] < nums[smallest]) smallest = right;

        if(smallest != i){
            swap(nums[i],nums[smallest]);
            heapify(nums, smallest,n);
        }
            
    }
    void buildHeap(vector<int>& nums){
        int n = nums.size();
        for(int i = n/2-1; i>=0; i--){
            heapify(nums,i,n);

        }
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> heap(nums.begin(), nums.begin()+k);
        buildHeap(heap);

        for(int i=k; i<nums.size(); i++){
              if(nums[i]>heap[0]){
                heap[0]=nums[i];
                heapify(heap,0,k);
              }
        }
        return heap[0];
    }
};
// Complexity
// Time: O(n log k)
// Space: O(k)






//best----------------------------------------------------------------------------------------------------------------------------------

// int findKthLargest(vector<int>& nums, int k) {
//        priority_queue<int, vector<int>, greater<int>> pq;
//        for(int num: nums){
//         pq.push(num);
//         if(pq.size()>k) pq.pop();
//        }
//        return pq.top();
// }

// | Operation           | Time           |
// | :------------------ | :------------- |
// | Push/pop (heap ops) | O(log k)       |
// | Total               | **O(n log k)** |
// | Space               | O(k)           |
