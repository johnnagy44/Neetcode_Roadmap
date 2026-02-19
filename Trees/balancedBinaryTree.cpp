#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool balanced = true;
    int calculateDepth(TreeNode *root, int depth)
    {
        if (!root)
        {
            return depth;
        }

        int leftDepth = calculateDepth(root->left, depth + 1);
        int rightDepth = calculateDepth(root->right, depth + 1);

        if (abs(leftDepth - rightDepth) > 1)
            balanced = false;
        return max(leftDepth, rightDepth);
    }
    bool isBalanced(TreeNode *root)
    {
        if (!root)
            return true;

        calculateDepth(root, 0);
        return balanced;
    }
};