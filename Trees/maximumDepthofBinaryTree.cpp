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
    void calculateDepth(TreeNode *root, int depth, int &maxDepth)
    {
        if (root == NULL)
        {
            depth--;
            maxDepth = max(depth, maxDepth);
            return;
        }

        calculateDepth(root->left, depth + 1, maxDepth);
        calculateDepth(root->right, depth + 1, maxDepth);
    }
    int maxDepth(TreeNode *root)
    {
        int maxIndex = 0;
        calculateDepth(root, 1, maxIndex);
        return maxIndex;
    }
};