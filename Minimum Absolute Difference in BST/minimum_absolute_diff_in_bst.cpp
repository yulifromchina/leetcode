/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int getMinimumDifference(TreeNode* root)
    {
        if(root==NULL)
            return min_diff;
        if(root->left != NULL) getMinimumDifference(root->left);
        if(pre >= 0) min_diff = min(min_diff, root->val - pre);
        pre = root->val;
        if(root->right != NULL) getMinimumDifference(root->right);
        return min_diff;
    }
private:
    int pre = -1;
    int min_diff = INT_MAX;
};