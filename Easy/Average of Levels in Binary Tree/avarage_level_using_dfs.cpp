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
        unordered_map<int, int> nums;
        unordered_map<int, double> sums;
        vector<double> result;
        DFS(root, 0, nums, sums);
        int len = sums.size();
        for(int i=0;i<len;++i)
            result.push_back(sums[i]/nums[i]);
        return result;
    }
private:
    void DFS(TreeNode * node, int level, unordered_map<int, int>&nums, unordered_map<int, double>&sums)
    {
        if(node==NULL)
            return;
        if(nums.count(level)==0)
        {
            nums[level] = 1;
            sums[level] = node->val;
        }else
        {
            nums[level] += 1;
            sums[level] += node->val;
        }
        DFS(node->left, level+1, nums, sums);
        DFS(node->right, level+1, nums, sums);
    }
};