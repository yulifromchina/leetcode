class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> temp;
        getSubset(nums, 0, temp, result);
        return result;
    }
    
    void getSubset(vector<int>&nums, int start, vector<int> &temp, vector<vector<int>> &result)
    {
        result.push_back(temp);
        for(int i=start; i< nums.size(); ++i)
        {
            if( i>start && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            getSubset(nums, i+1, temp, result);
            temp.pop_back();
        }
    }
};