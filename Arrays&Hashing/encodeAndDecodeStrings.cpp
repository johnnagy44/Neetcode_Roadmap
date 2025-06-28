#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string encoded = "";

        for (int i = 0; i < strs.size(); i++)
        {
            for (int j = 0; j < strs[i].size(); j++)
            {
                encoded += strs[i][j];
            }
            encoded += "///";
        }

        return encoded;
    }

    vector<string> decode(string s)
    {
        vector<string> decoded;
        string tmp = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '/' && s.substr(i, 3) == "///")
            {
                decoded.push_back(tmp);
                tmp = "";
                i+=2;
            }
            else
                tmp += s[i];
        }
        return decoded;
    }
};