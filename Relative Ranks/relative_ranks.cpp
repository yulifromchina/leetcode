class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        int len = nums.size();
        vector<int> sort_nums(nums);
        sort(sort_nums.begin(), sort_nums.end(), greater<int>());
        unordered_map<int ,string> umap;
        for(int i=0; i<len;++i)
        {
            if(i==0)
                umap[sort_nums[i]] = "Gold Medal";
            else if(i==1)
                umap[sort_nums[i]] = "Silver Medal";
            else if(i==2)
                umap[sort_nums[i]] = "Bronze Medal";
            else
                umap[sort_nums[i]] = to_string(i+1);
        }
        vector<string> result;
        for(int i=0; i<len;++i)
        {
            result.push_back(umap[nums[i]]);
        }
        return result;
    }
};