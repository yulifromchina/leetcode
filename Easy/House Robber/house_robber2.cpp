class Solution {
public:
    int rob(vector<int>& nums) {
        int dp_pre = 0, dp_pre_pre = 0;
        int len = nums.size();
        for(int i=0; i<len;++i)
        {
            int dp_cur = max(dp_pre_pre + nums[i], dp_pre);
            dp_pre_pre = dp_pre;
            dp_pre = dp_cur;
        }
        return max(dp_pre, dp_pre_pre);
    }
};