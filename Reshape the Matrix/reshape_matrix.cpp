class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int old_row = nums.size(), old_col = nums[0].size();
        if(((old_row==r) && (old_col==c))|| (old_row * old_col != r * c) )
            return nums;
        vector<int> val;
        for(auto vi:nums)
            for(auto i:vi)
                val.push_back(i);
        
        vector<vector<int>> result;
        vector<int>::iterator it= val.begin();
        while(r--)
        {
            vector<int> temp;
            copy(it, it+c, back_inserter(temp));
            result.push_back(temp);
            temp.clear();
            it+=c;
        }
        return result;
    }
};