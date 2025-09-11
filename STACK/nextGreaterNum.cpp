#include <bits/stdc++.h>
using namespace std;
class Solution
{
 public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;

        for (int num : nums1)
        {
            int idx = -1;

            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums2[j] == num)
                {
                    idx = j;
                    break;
                }
            }

            int next = -1;
            for (int k = idx + 1; k < nums2.size(); k++)
            {
                if (nums2[k] > num)
                {
                    next = nums2[k];
                    break;
                }
            }
            ans.push_back(next);
        }

        return ans;
    }
};
