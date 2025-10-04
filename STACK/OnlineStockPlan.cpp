#include <bits/stdc++.h>
using namespace std;

stack<pair<int, int>> st;

int next(int price)
{
    int span = 1;
    while (!st.empty() && st.top().first <= price)
    {
        span += st.top().second;
        st.pop();
    }
    st.push({price, span});
    return span;
}
// tc = 0(1)
// sc = 0(n)

// for offline mode when stock are computed after knowing all stock while in online mode stock are computed after each stock day.

vector<int> stockSpan(vector<int> &price)
{
    int n = price.size();
    vector<int> span(n);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && price[st.top()] <= price[i])
        {
            st.pop();
        }
        if (st.empty())
            span[i] = i + 1;
        else
            span[i] = i - st.top();
        st.push(i);
    }
    return span;
}
// tc = 0(n)
// sc = 0(n)