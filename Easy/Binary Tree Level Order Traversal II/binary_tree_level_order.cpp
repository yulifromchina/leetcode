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
    //
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode * > que_node;
        que_node.push(root);
        while(!que_node.empty())
        {   
            vector<int> level;
            int size = que_node.size();
            for(int i=0; i<size; ++i)
            {
                if(que_node.front()->left!=NULL) que_node.push(que_node.front()->left);
                if(que_node.front()->right!=NULL) que_node.push(que_node.front()->right);
                level.push_back(que_node.front()->val);
                que_node.pop();
            }
            result.insert(result.begin(), level);
            level.clear();
            
        }
        return result;
    }
   
};