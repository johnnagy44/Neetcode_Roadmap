#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int first = 0, second = numbers.size() - 1;
        while (first < second)
        {
            if (numbers[first] + numbers[second] == target)
                break;
            else if (numbers[first] + numbers[second] > target)
                second--;
            else
                first++;
        }
        return {first + 1, second + 1};
    }
};