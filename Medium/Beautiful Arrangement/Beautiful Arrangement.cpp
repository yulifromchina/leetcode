class Solution {
public:
    
    int countArrangement(int N) {
        if(N <=0 )
            return 0;
        
        vector<int> nums;
        for(int i=0;i<=N;++i)
            nums.push_back(i);
        
        int count = 0;
        Permutation(nums, 1, count);
        return count;
    }
    
    void Permutation(vector<int> &nums, int start, int &count)
    {
        int n = nums.size();
        if(start==n)
        {
            ++count;
            return;
        }
        for(int i = start; i<n;++i)
        {
            if(nums[i] % start !=0 && start % nums[i] != 0)
                continue;
            swap(nums[start], nums[i]);
            Permutation(nums, start+1, count);
            swap(nums[start], nums[i]);
        }
    }
    
    
};