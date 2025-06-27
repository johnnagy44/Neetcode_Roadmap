#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> res;

        for (int i = 0; i < strs.size(); i++)
        {
            vector<int> count(26);

            for (int j = 0; j < strs[i].size(); j++)
            {
                count[strs[i][j] - 'a']++;
            }

            string key = to_string(count[0]);

            for (int k = 1; k < 26; k++)
            {
                key += ',' + to_string(count[k]);
            }

            res[key].push_back(strs[i]);
        }
        vector<vector<string>> result;

        for (auto &ptr : res)
        {
            result.push_back(ptr.second);
        }

        return result;
    }
};