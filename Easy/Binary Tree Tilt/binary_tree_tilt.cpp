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
    int findTilt(TreeNode* root) {
        result = 0;
        _get_sum(root);
        return result;
    }
private:
    int result;
    int _get_sum(TreeNode * root)
    {
        if(root==NULL)
            return 0;
        int left = _get_sum(root->left);
        int right = _get_sum(root->right);
        result += abs(left-right);
        return root->val + left + right;
    }
};