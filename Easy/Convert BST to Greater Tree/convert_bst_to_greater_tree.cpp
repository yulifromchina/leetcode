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
    TreeNode* convertBST(TreeNode* root) {
        sum = 0;
        travel(root);
        return root;
    }
private:
    int sum;
    void travel(TreeNode * root)
    {
        if(root==NULL)
            return;
        if(root->right)
            travel(root->right);
        sum += root->val;
        root->val = sum;
        if(root->left)
            travel(root->left);
    }
};