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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int left_length = maxDepth(root->left);
        int right_length = maxDepth(root->right);
        return left_length > right_length ? (left_length+1):(right_length+1);
    }
};