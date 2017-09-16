class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, temp=0;
        int len = nums.size();
        for(int i=0; i<len;++i)
        {
            if(nums[i]&0x1)
            {
                ++temp;
            }
            else
            {
                if(max < temp)
                    max = temp;
                temp = 0;
            }
        }
        return (max>temp?max:temp);
    }
};