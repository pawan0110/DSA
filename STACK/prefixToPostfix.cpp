#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string prefixToPostfix(string prefix) {
        stack<string> st;

        for (int i = prefix.size() - 1; i >= 0; i--) {
            char c = prefix[i];

            if (isalnum(c)) {
                st.push(string(1, c));
            } else {
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                string expr = op1 + op2 + c;  // postfix form
                st.push(expr);
            }
        }

        return st.top();
    }
};
// tc = o(n*2)
//sc = o(n*2)