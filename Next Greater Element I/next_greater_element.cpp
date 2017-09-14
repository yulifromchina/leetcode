class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        int nums_size = nums.size();
        int fn_size = findNums.size();
        vector<int> result(fn_size,-1);
        unordered_map<int, int> umap;
        for(int i=0;i<nums_size;++i)
        {
            umap[nums[i]] = i;
        }
        
        for(int i=0;i<fn_size;++i)
        {
            int start = umap[findNums[i]];
            for(int j=start+1;j<nums_size;++j)
            {
                if(nums[j]>findNums[i])
                {
                    result[i]=nums[j];
                    break;
                }
            }
        }
        return result;
    }
};