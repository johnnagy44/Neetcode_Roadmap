#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int vecSize = piles.size();
        sort(piles.begin(), piles.end());
        int left = 1, right = *max_element(piles.begin(), piles.end());
        int middle;
        int result = right;
        long long usedHours = 0;

        while (left <= right)
        {
            middle = left + (right - left) / 2;
            usedHours = 0;
            for (int i = 0; i < vecSize; i++)
            {
                usedHours += ceil((double)piles[i] / middle);
                if (usedHours > h)
                    break;
            }

            if (usedHours > h)
                left = middle + 1;
            else
            {
                result = middle;
                right = middle - 1;
            }
        }
        return result;
    }
};