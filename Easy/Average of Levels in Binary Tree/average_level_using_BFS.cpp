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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        queue<TreeNode * > que;
        que.push(root);
        while(!que.empty())
        {
            queue<TreeNode *> temp_que;
            double sum = 0.0;
            long num = 0;
            while(!que.empty())
            {
                TreeNode * node = que.front();
                que.pop();
                sum += node->val;
                num += 1;
                if(node->left) temp_que.push(node->left);
                if(node->right) temp_que.push(node->right);
            }
            que = temp_que;
            result.push_back(sum/num);
        }
        return result;
    }
};