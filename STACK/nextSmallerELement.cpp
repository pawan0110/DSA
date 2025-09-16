#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> nextSmallerElements(const vector<int> &arr)
    {
        int n = arr.size();
        vector<int> nse(n, -1);
        stack<int> st; // will store elements

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() >= arr[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                nse[i] = st.top();
            }
            st.push(arr[i]);
        }
        return nse;
    }
};
// tc = o(n)
//sc = o(n)