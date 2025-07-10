#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1;
        int maxArea = INT_MIN;
        while (left < right)
        {
            maxArea = max(maxArea, (right - left) * min(height[left], height[right]));

            if (height[left] <= height[right])
                left++;
            else
                right--;
        }

        return maxArea;
    }
};