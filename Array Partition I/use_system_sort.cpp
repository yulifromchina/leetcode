class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int i, j, len = nums.size();
        sort(nums.begin(), nums.end());
        //for_each(nums.begin(), nums.end(), [](int i){cout<<i<<" ";});
        int sum=0;
        for(i=0;i<len-1;i+=2)
        {
            sum+=nums[i];
        }
        return sum;
    }
};