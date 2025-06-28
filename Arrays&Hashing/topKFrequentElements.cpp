#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);

        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }

        vector<int> ans;

        for (const auto &ptr : count)
        {
            freq[ptr.second].push_back(ptr.first);
        }

        for (int i = freq.size() - 1; i >= 0; i--)
        {
            for (int c : freq[i])
            {
                ans.push_back(c);
                if (ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};