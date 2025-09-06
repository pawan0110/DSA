#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string postfixToInfix(string postfix) {
        stack<string> st;

        for (char c : postfix) {
            if (isalnum(c)) { 
                st.push(string(1, c));  
            } 
            else { 
                string op2 = st.top(); st.pop();
                string op1 = st.top(); st.pop();
                string expr = "(" + op1 + c + op2 + ")";
                st.push(expr);
            }
        }

        return st.top();
    }
};

int main() {
    Solution sol;
    string postfix = "ABC/-AK/L-*";
    cout << "Postfix: " << postfix << endl;
    cout << "Infix: " << sol.postfixToInfix(postfix) << endl;
    return 0;
}
//tc = 0(n)
// sc = 0(n)