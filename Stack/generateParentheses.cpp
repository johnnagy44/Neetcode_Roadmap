#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> result;
        string tmp;

        recu(result, tmp, n, 0, 0);

        return result;
    }

    void recu(vector<string> &vec, string s, int n, int open, int close)
    {
        if (open > n || close > n || close > open)
            return;
        if (open == n && close == n)
        {
            vec.push_back(s);
            return;
        }
        recu(vec, s + "(", n, open + 1, close);
        recu(vec, s + ")", n, open, close + 1);
    }
};

int main()
{
    int n = 3;
    Solution x;
    vector<string> s = x.generateParenthesis(n);

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
}