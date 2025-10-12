// 992. Subarrays with K Different Integers
// Solved
// Hard
// Topics
// premium lock icon
// Companies
// Hint
// Given an integer array nums and an integer k, return the number of good subarrays of nums.

// A good array is an array where the number of different integers in that array is exactly k.

// For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
// A subarray is a contiguous part of an array.

 

// Example 1:

// Input: nums = [1,2,1,2,3], k = 2
// Output: 7
// Explanation: Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]
// Example 2:

// Input: nums = [1,2,1,3,4], k = 3
// Output: 3
// Explanation: Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].
 

// Constraints:

// 1 <= nums.length <= 2 * 104
// 1 <= nums[i], k <= nums.length

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return atmost(nums,k) - atmost(nums, k-1);
    }
    int atmost(vector<int>& nums, int k){
        int n= nums.size();
        int goodArray =0;
        int left = 0;
        int dist = 0;
        unordered_map<int,int> freq;;

       for(int right=0; right<n; right++){
        freq[nums[right]]++;

        while(freq.size()>k){
            freq[nums[left]]--;
            if(freq[nums[left]] == 0) freq.erase(nums[left]);
            left++;
        }
        goodArray += right-left+1;
       }
        return goodArray;
    }
};

// tc = o(n)
// sc= o(1)