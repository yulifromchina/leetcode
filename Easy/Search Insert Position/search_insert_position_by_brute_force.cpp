class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0])
            return 0;
        
        int len = nums.size(), i=0;
        for(; i<len;++i)
        {
            if(nums[i]>=target)
                break;
        }        
        return i;  
    }
    
};