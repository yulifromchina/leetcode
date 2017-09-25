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
    bool findTarget(TreeNode* root, int k) {
        set<int> node_set;
        return _find_target(root, node_set, k);
    }
private:
    bool _find_target(TreeNode * root, set<int> &node_set, int k)
    {
        if(root==NULL)
            return false;
        if(node_set.count(k-root->val)!=0)
            return true;
        node_set.insert(root->val);
        return _find_target(root->left, node_set, k) || _find_target(root->right, node_set, k);
    }
};