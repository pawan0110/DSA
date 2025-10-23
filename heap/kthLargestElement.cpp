#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=(n-2)/2; i>=0; i--){
          maxHeapify(nums,n,i);
        } 

        for(int i=0; i<k-1; i++){
            swap(nums[0],nums[n-1-i]);
            maxHeapify(nums,n-1-i,0);
        }
        return nums[0];

}
    void maxHeapify(vector<int>& nums, int n, int i){
        int left = 2*i+1;
        int right = 2*i+2;
        int parent = (i-1)/2;

        int largest = i;
        if(left < n && nums[left]>nums[largest])
         largest = left;
        if(right <n && nums[right]>nums[largest])
         largest = right;
        if(largest != i){
          swap(nums[largest],nums[i]);
          maxHeapify(nums,n,largest);
        }

    }
};
//tc = (O(n  + klogn)
//sc = 0(n)