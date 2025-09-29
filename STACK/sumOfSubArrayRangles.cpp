#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    long long subArrayRanges(vector<int> &nums)
    {
        return subArray(nums, true) - subArray(nums, false);
    }

    long long subArray(vector<int> &nums, bool IsMax)
    {
        int n = nums.size();
        long long res = 0;
        vector<int> left, right;
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            while (!st.empty() && IsMax ? nums[st.top()] < nums[i] : nums[st.top()] > nums[i])
            {
                cnt += left[st.top()];
                st.pop();
            }
            left[i] = cnt;
            st.push(i);
        }

        while (!st.empty())
            st.pop();

        for (int i = n - 1; i >= 0; i--)
        {
            int cnt = 0;
            while (!st.empty() && IsMax ? nums[st.top()] <= nums[i] : nums[st.top()] >= nums[i])
            {
                cnt += right[st.top()];
                st.pop();
            }
            right[i] = cnt;
            st.push(i);
        }
        for(int i =0; i<n; i++) {
            res += (long long) nums[i]*left[i]*right[i];
            return res;
        }
    }
};

int main()
{
    solution sol;

    vector<int> nums1 = {1, 2, 3};
    cout << sol.subArrayRanges(nums1) << endl;

    vector<int> nums2 = {1, 3, 5, 6};
    cout << sol.subArrayRanges(nums2) << endl;

    vector<int> nums3 = {1, 5, 3, 9};
    cout << sol.subArrayRanges(nums3) << endl;
}
// tc = o(n)
// sc =0(n)