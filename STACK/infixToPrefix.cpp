#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
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

    string infixToPostfix(string s)
    {
        string result = "";
        stack<char> st;

        for (char c : s)
        {
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

        return result;
    }

    string infixToPrefix(string s)
    {
        reverse(s.begin(), s.end());

        for (char &c : s)
        {
            if (c == '(')
                c = ')';
            else if (c == ')')
                c = '(';
        }

        string prefix = infixToPostfix(s);
        reverse(prefix.begin(), prefix.end());

        return prefix;
    }
};

// TC=O(n)+O(n)+O(n)+O(n)=O(n)

// SC=O(n)