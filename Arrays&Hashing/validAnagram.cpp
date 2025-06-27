#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> s_map, t_map;

        if (s.length() != t.length())
            return false;

        for (int i = 0; i < s.length(); i++)
        {
            s_map[s[i]]++;
        }

        for (int i = 0; i < t.length(); i++)
        {
            t_map[t[i]]++;
        }

        return t_map == s_map;
    }
};

int main() {}