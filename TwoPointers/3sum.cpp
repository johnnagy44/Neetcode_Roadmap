#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            start = i + 1;
            end = nums.size() - 1;
            while (start < end)
            {
                if ((nums[start] + nums[end] + nums[i]) == 0)
                {
                    ans.push_back({nums[start], nums[end], nums[i]});
                    while (start < end && nums[start] == nums[start + 1])
                        start++;
                    while (start < end && nums[end] == nums[end - 1])
                        end--;

                    start++;
                    end--;
                }
                else if ((nums[start] + nums[end] + nums[i]) > 0)
                    end--;
                else
                    start++;
            }
        }
        return ans;
    }
};