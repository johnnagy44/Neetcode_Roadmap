#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        vector<int> tmp(10);
        for (int i = 0; i < board.size(); i++)
        {
            tmp.assign(10, 0);
            for (int j = 0; j < board[i].size(); j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (tmp[board[i][j] - '0'] == 1)
                        return false;
                    tmp[board[i][j] - '0'] = 1;
                }
            }
        }

        for (int j = 0; j < board.size(); j++)
        {
            tmp.assign(10, 0);
            for (int i = 0; i < board[i].size(); i++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (tmp[board[i][j] - '0'] == 1)
                        return false;
                    tmp[board[i][j] - '0'] = 1;
                }
            }
        }

        for (int boxRow = 0; boxRow < 3; boxRow++)
        {
            for (int boxCol = 0; boxCol < 3; boxCol++)
            {
                tmp.assign(10, 0);
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        char c = board[boxRow * 3 + i][boxCol * 3 + j];
                        if (c == '.')
                            continue;
                        int num = c - '0';
                        if (tmp[num])
                            return false;
                        tmp[num] = 1;
                    }
                }
            }
        }

        return true;
    }
};