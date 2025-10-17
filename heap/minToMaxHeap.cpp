#include <bits/stdc++.h>
using namespace std;
class Solution {
    void maxHeapify(vector<int>& nums, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && nums[left] > nums[largest])
            largest = left;
        if (right < n && nums[right] > nums[largest])
            largest = right;

        if (largest != i) {
            swap(nums[i], nums[largest]);
            maxHeapify(nums, n, largest);
        }
    }
public:
    vector<int> minToMaxHeap(vector<int> nums) {
          int n = nums.size();
          for (int i = (n - 2) / 2; i >= 0; i--) {
            maxHeapify(nums, n, i);
          }

        return nums;
    }
};
//time complexity= o(n)
//space = o(1) or o(logn)...in worse case(recusive)



// ✅ Final Complexities
// Operation	Complexity	Explanation
// Building the max heap (min→max conversion)	O(n)	Each node heapified once; total cost sums to linear
// Space complexity	O(1)	In-place conversion (only recursion stack used)
// If recursion considered	O(log n)	Stack depth in worst case