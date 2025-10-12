#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums, goal) - atmost(nums, goal-1);
    }
    int atmost(vector<int>& nums, int goal){
         if (goal < 0) return 0;

        int count = 0;
        int sum = 0;
        int left =0;

        for( int right=0; right<nums.size(); right++){
            sum +=nums[right];

            while(sum>goal){
                sum -= nums[left];
                left++;
            }
            count += (right-left+1);
        }
        return count;
    }
};
// tc = o(n)
// sc= o(1)


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
           if(freq[nums[right]] == 0) {
            dist++;
           }
           freq[nums[right]]++;

            while(dist>k){
                freq[nums[left]]--;
                if(freq[nums[left]] == 0) {
                     dist--;
                }
                left++;
            }
            goodArray += (right-left+1);

        }
        return goodArray;
    }
};
// tc = o(n)
// sc= o(1)