#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string postfixToprefix(string postfix) {
        stack<string> st;

        for(char c: postfix) {
           if(isalnum(c)) {
            st.push(string(1, c));
           } else {
            string op2 = st.top(); st.pop();
            string op1 = st.top(); st.pop();
            string expr = c + op1 + op2;
            st.push(expr);
           }
        }

        return st.top();
    }
};