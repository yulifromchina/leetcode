class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        if(len!=0)
        {
            sort(nums.begin(), nums.end(), less<int>());
        }
        int i=0;
        for(;i<len;++i)
        {
            if(i!=nums[i])
                break;
        }
        return i;
    }
};