#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int vecSize = height.size();
        vector<int> maxLeft(vecSize), maxRight(vecSize);
        int trapped = 0;

        maxLeft[0] = height[0];
        for (int i = 1; i < vecSize; i++)
        {
            maxLeft[i] = max(height[i], maxLeft[i - 1]);
        }

        maxRight[vecSize - 1] = height[vecSize - 1];
        for (int i = vecSize - 2; i >= 0; i--)
        {
            maxRight[i] = max(height[i], maxRight[i + 1]);
        }

        for (int i = 0; i < vecSize; i++)
        {
            int tmp = min(maxLeft[i], maxRight[i]) - height[i];
            trapped += tmp > 0 ? tmp : 0;
        }

        return trapped;
    }
};