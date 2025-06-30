#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        int op1, op2 = 0;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+")
            {
                op2 = st.top();
                st.pop();
                op1 = st.top();
                st.pop();
                st.push(op1 + op2);
            }
            else if (tokens[i] == "*")
            {
                op2 = st.top();
                st.pop();
                op1 = st.top();
                st.pop();
                st.push(op1 * op2);
            }
            else if (tokens[i] == "/")
            {
                op2 = st.top();
                st.pop();
                op1 = st.top();
                st.pop();
                st.push(op1 / op2);
            }
            else if (tokens[i] == "-")
            {
                op2 = st.top();
                st.pop();
                op1 = st.top();
                st.pop();
                st.push(op1 - op2);
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }

        return st.top();
    }
};