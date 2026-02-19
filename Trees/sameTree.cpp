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
    bool same = true;

    void helperdfs(TreeNode *p, TreeNode *q)
    {
        if(!p&&!q)
            return;
        if(!p||!q)
        {
            same =false;
            return;
        }
        if(p->val!=q->val)
        {
            same=false;
            return;
        }
        helperdfs(p->left,q->left);
        helperdfs(p->right,q->right);
    }

    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        helperdfs(p,q);
        return same;
    }
};