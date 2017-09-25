class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        int sum = 0;
        int minNum = nums[0];
        for(auto ele:nums)
        {
            sum+=ele;
            minNum = min(minNum, ele);
        }
     
        int size = nums.size();      
        return sum - minNum*size;
    }
};