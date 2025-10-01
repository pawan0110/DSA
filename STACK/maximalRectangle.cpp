#include <bits/stdc++.h>
using namespace std;

class soltuion
{
private:
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int maxArea = 0;
        vector<int> heights(col, 0);

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == '1')
                {
                    heights[j] += '1';
                }
                else
                {
                    heights[j] = 0;
                }
            }
            maxArea = max(maxArea, largestRectangle(heights));
        }
        return maxArea;
    }

    int largestRectangle(vector<int> &heights)
    {
        stack<int> st;
        int maxArea = 0;
        heights.push_back(0);

        for (int i = 0; i < heights.size(); i++)
        {
            while (!st.empty() && heights[st.top()] > heights[i])
            {
                int h = st.top();
                st.pop();
                int left = st.empty() ? -1 : st.top();
                int width = i - left - 1;
                maxArea = max(maxArea, h * width);
            }
            st.push(i);
        }
        heights.pop_back();
        return maxArea;
    }
};
//tc = o(row*col)
//sc = 0(col)