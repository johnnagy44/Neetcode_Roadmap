#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        unordered_map<char, int> freqMap;
        int l = 0;
        int maxLength = 0;
        int maxf = 0;

        for (int r = 0; r < s.size(); r++)
        {
            freqMap[s[r]]++;
            maxf = max(maxf, freqMap[s[r]]);

            while ((r - l + 1) - maxf > k)
            {
                freqMap[s[l]]--;
                l++;
            }

            maxLength = max(r - l + 1, maxLength);
        }

        return maxLength;
    }
};