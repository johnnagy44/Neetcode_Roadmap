#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int numsSize = nums.size();
        vector<int> pref(numsSize);
        vector<int> suff(numsSize);

        pref[0] = 1;
        suff[numsSize - 1] = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            pref[i] = pref[i - 1] * nums[i - 1];
        }

        for (int i = numsSize - 2; i >= 0; i--)
        {
            suff[i] = suff[i + 1] * nums[i + 1];
        }

        vector<int> result(numsSize);

        for (int i = 0; i < nums.size(); i++)
        {
            result[i] = pref[i] * suff[i];
        }

        return result;
    }
};