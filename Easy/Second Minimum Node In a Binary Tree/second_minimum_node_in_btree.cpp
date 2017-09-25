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
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL)
            return 0;
        getNodeValue(root);
        sort(node.begin(), node.end(), less<int>());
        node.erase(unique(node.begin(), node.end(), [](int i, int j){return i==j;}), node.end());
        if(node.size()==1)
            return -1;
        else
            return node[1];
    }
private:
    vector<int> node;
    void getNodeValue(TreeNode * root)
    {
        if(root!=NULL)
        {
            node.push_back(root->val);
            getNodeValue(root->left);
            getNodeValue(root->right);
        }
    }
};