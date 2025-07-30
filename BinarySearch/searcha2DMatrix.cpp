#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size(), cols = matrix[0].size();
        int v_middle, h_middle;
        int v_left = 0, v_right = rows - 1, h_left = 0, h_right = cols - 1;

        while (v_left <= v_right)
        {
            v_middle = v_left + (v_right - v_left) / 2;
            if (target == matrix[v_middle][cols - 1])
                return true;
            else if (target > matrix[v_middle][cols - 1])
                v_left = v_middle + 1;
            else if (target < matrix[v_middle][0])
                v_right = v_middle - 1;
            else
                break;
        }

        if (v_left > v_right)
            return false;

        while (h_left <= h_right)
        {
            h_middle = h_left + (h_right - h_left) / 2;
            if (target == matrix[v_middle][h_middle])
                return true;
            else if (target > matrix[v_middle][h_middle])
                h_left = h_middle + 1;
            else
                h_right = h_middle - 1;
        }

        return false;
    }
};