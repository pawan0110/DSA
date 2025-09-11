#include <bits/stdc++.h>
using namespace std;
// class Solution {
//  public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;

//         for (int num : nums1) {
//             int idx = -1;
           
//             for (int j = 0; j < nums2.size(); j++) {
//                 if (nums2[j] == num) {
//                     idx = j;
//                     break;
//                 }
//             }

                                                                          
//             int next = -1;                                            // tc = o(n*m) n=num1.size() m=nums2.size()
//             for (int k = idx + 1; k < nums2.size(); k++) {            // sc = o(n)
//                 if (nums2[k] > num) {
//                     next = nums2[k];
//                     break;
//                 }
//             }
//             ans.push_back(next);
//         }

//         return ans;
//     }
// };


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int, int> nextGreater;
      stack<int> st;

      for(int i = nums2.size()-1; i>=0; i--){
       int num = nums2[i];
        while(!st.empty() && st.top()<=num){
            st.pop();
        }
        nextGreater[num] = st.empty() ? -1: st.top();
        st.push(num);
       
     } vector<int> ans;
        for(int num : nums1){
            ans.push_back(nextGreater[num]);
        }
       
      return ans;
    }                              // tc = o(n+m) n=num1.size() m=nums2.size()
};                                // sc = o(m)