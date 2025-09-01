#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.empty())
            return 0;

        int l = 0, r = 0;
        unordered_set<char> charSet;
        int maxLength = 0;

        while (r < s.length())
        {
            if (charSet.find(s[r]) == charSet.end())
            {
                charSet.insert(s[r]);
                maxLength = max(maxLength, r - l + 1);
                r++;
            }
            else
            {
                charSet.erase(s[l]);
                l++;
            }
        }

        return maxLength;
    }
};

int main()
{
}