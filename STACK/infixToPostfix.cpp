#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infixToPostfix(string s)
{
    stack<char> st;
    string result = "";

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if (isalnum(c))
        {
            result += c;
        }

        else if (c == '(')
        {
            st.push(c);
        }

        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        else
        {
            while (!st.empty() && prec(c) <= prec(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    cout << "Postfix expression: " << result << endl;
}

int main()
{
    string exp = "(p+q)*(m-n)";
    cout << "Infix expression: " << exp << endl;
    infixToPostfix(exp);
    return 0;
}

// Time Complexity: O(N)

// Space Complexity: O(N) for using the stack