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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        return traverse(s, t);
    }
    bool traverse(TreeNode * s, TreeNode * t)
    {
        return (s!=NULL && ((equal(s, t)) || traverse(s->left, t) || traverse(s->right, t)));
    }
    bool equal(TreeNode * s, TreeNode * t)
    {
        if(s==NULL && t==NULL)
            return true;
        if(s==NULL || t==NULL)
            return false;
        return (s->val==t->val && equal(s->left, t->left) && equal(s->right, t->right));
    }
};