// max rectangle in histogram
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            int rect = 2 * (min(heights[i], heights[i + 1]));
            while (!st.empty() && st.top() < rect)
            {
                st.pop();
            }
            st.push(rect);
        }
        int ans = st.top();
        return ans;
    }
};
// tc = O(n*n)   tle;
// sc = 0(n)

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> st;
        int n = heights.size();
        int maxArea = 0;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[st.top()] > heights[i])
            {
                int element = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty() ? -1 : st.top();
                maxArea = max(maxArea, heights[element] * (nse - pse - 1));
            }
            st.push(i);
        }

        while (!st.empty())
        {
            int element = st.top();
            st.pop();
            int nse = n;
            int pse = st.empty() ? -1 : st.top();
            maxArea = max(maxArea, heights[element] * (nse - pse - 1));
        }

        return maxArea;
    }
};
// tc = 0(n)
//sc = 0(n)