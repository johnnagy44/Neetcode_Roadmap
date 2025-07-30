#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        int middle;

        while (left <= right)
        {
            middle = left + (right - left) / 2;
            if (target == nums[middle])
                return middle;
            else if (target > nums[middle])
                left = middle + 1;
            else
                right = middle - 1;
        }
        return -1;
    }
};