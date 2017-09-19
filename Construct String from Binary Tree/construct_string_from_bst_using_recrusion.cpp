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
    string tree2str(TreeNode* t) {
        if(t==NULL)
            return "";
        //case 1: 
        if(t->left==NULL && t->right==NULL)
            return to_string(t->val);
        //case 2:
        else if(t->right==NULL)
            return to_string(t->val)+"("+tree2str(t->left)+")";
        //case 3:
        else if(t->left==NULL)
            return to_string(t->val)+"()"+"("+tree2str(t->right)+")";
        //case 4:
        else
            return to_string(t->val)+"("+tree2str(t->left)+")"+"("+tree2str(t->right)+")";
    }
};