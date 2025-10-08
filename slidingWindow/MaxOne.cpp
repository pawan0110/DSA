#include<bits/stdc++.h>
using namespace std;

// int LongestOne(vector<int> &nums, int k){
//     int maxLen=0;
//     int n = nums.size();
//     for(int i=0; i<n; i++){
//         int zero = 0;
//         for(int j=i; j<n; j++){
//             if(nums[j]==0){
//                 zero++;
//             }
//             if(zero>k){
//                 break;
//             }
//             maxLen = max(maxLen, j-i+1);
//         }
//     }
//     return maxLen;
// }
//tc = o(n*2)
//sc = 0(1)


int LongestOne(vector<int> &nums, int k){
    int maxLen=0;
    int n = nums.size();
    int zero=0;
    int left=0;
    for(int right=0; right<n; right++){
        if(nums[right]==0)zero++;
        if(zero>k){
            if(nums[left]==0){
                zero--;
            }
            left++;
        }
        maxLen = max(maxLen, right-left+1);
    }
    return maxLen;
}
//tc=0(n)
//sc=0(1)