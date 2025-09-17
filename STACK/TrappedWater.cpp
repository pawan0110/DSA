#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         if(n == 0) return 0;

//         vector<int> leftMax(n), rightMax(n);

//         leftMax[0] = height[0];
//         for(int i = 1; i < n; i++){
//             leftMax[i] = max(leftMax[i-1], height[i]);
//         }

//         rightMax[n-1] = height[n-1];
//         for(int i = n-2; i >= 0; i--){
//             rightMax[i] = max(rightMax[i+1], height[i]);
//         }

//         int water = 0;
//         for(int i = 0; i < n; i++){
//             water += min(leftMax[i], rightMax[i]) - height[i];
//         }

//         return water;
//     }
// };
//tc = o(n)
//sc = o(n)



class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left=0; int right = n-1;
        int leftMax=0; int rightMax=0;
        int water=0;
        while(left<=right){
            if(height[left]<height[right]){
                if(height[left]>=leftMax) {
                    leftMax=height[left];
                }else {
                    water += leftMax - height[left];
                }
                left++;
            }else {
                if(height[right]>=rightMax){
                    rightMax=height[right];
                }else {
                    water += rightMax-height[right];
                }
                right--;
            }
        } 
        return water;
    }
};
//tc = o(n)
//sc = o(1)