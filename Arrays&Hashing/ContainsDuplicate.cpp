#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> seen;
        for (int i = 0; i < nums.size(); i++)
        {
            auto x = seen.emplace(nums[i]);
            if (x.second == false)
                return true;
        }
        return false;
    }
};

int main()
{
}