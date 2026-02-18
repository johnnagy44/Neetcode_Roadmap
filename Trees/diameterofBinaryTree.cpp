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

class Solution
{
public:
    int maxDiameter = 0;
    int calculateMaxDepth(TreeNode *root, int depth)
    {
        if (root == nullptr)
        {

            return 0;
        }

        int leftHeight = calculateMaxDepth(root->left, 1);
        int rightHeight = calculateMaxDepth(root->right, 1);
        maxDiameter = max(leftHeight + rightHeight, maxDiameter);
        return 1 + max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        calculateMaxDepth(root, 0);
        return maxDiameter;
    }
};