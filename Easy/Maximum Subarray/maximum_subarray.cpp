class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        if(len==NULL)
            return 0;
        
        int sum = nums[0], max_sum = nums[0];
        for(int i=1; i<len;++i)
        {
            sum = nums[i] + (sum > 0 ? sum : 0);
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};