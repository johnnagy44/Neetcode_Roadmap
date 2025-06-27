#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> hashMap;
        vector<int> ans(2);

        for (int i = 0; i < nums.size(); i++)
        {
            int comp = target - nums[i];

            if (hashMap.find(comp) != hashMap.end())
            {
                ans[0] = hashMap[comp];
                ans[1] = i;
                return ans;
            }

            hashMap[nums[i]] = i;
        }
        return ans;
    }
};