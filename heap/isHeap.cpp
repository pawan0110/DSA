#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHeap(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<=(n-2)/2; i++){
            int left = 2*i+1;
            int right = 2*1+2;

            if(left<n && nums[left]<nums[i]) return false;
            if((right<n && nums[right]<nums[i])) return false;

           
        }
        return true;

    }
};