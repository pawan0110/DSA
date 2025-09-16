#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nqe(n, -1);
        stack<int> st; 

        for (int i = 2 * n - 1; i >= 0; i--) {
            int idx = i % n;
            while (!st.empty() && nums[st.top()] <= nums[idx]) {
                st.pop();
            }
            if (i < n) { 
                if (!st.empty()) {
                    nqe[idx] = nums[st.top()];
                }
            }
            st.push(idx);
        }
        return nqe;
    }
};
// tc = o(4n)
//sc = o(2n) + 0(n)