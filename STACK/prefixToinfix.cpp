#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string prefixToInfix(string prefix) {
        stack<string> st;

        for (int i = prefix.size() - 1; i >= 0; i--) {
            char c = prefix[i];

            if (isalnum(c)) {
                st.push(string(1, c));  
            }
            else { 
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                string expr = "(" + op1 + c + op2 + ")";
                st.push(expr);
            }
        }

        return st.top();
    }
};

int main() {
    Solution sol;
    string prefix = "*-A/BC-/AKL";
    cout << "Prefix: " << prefix << endl;
    cout << "Infix: " << sol.prefixToInfix(prefix) << endl;
    return 0;
}
// tc =o(n)
//sc=o(n)