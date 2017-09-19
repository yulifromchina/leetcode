class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNotZeros = 0, cur = 0, len=nums.size();
        for(; cur<len;++cur)
        {
            if(nums[cur]!=0)
                nums[lastNotZeros++] = nums[cur];
        }
        for(;lastNotZeros < len; ++lastNotZeros)
            nums[lastNotZeros] = 0;
    }
};