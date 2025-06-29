#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(),nums.end());
        int res=0;

        for(int num:numSet)
        {
            if(numSet.find(num-1)==numSet.end())
            {
                int counter=1;
                while(numSet.find(num+counter)!=numSet.end())
                {
                    counter++;
                }

                res=max(res,counter);
            }
        }

        return res;
    }
};