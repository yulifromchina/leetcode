class NumArray {
public:
    NumArray(vector<int> nums) {
        if(nums.empty())
            return;
        sum.push_back(nums[0]);
        int len = nums.size();
        for(int i=1;i<len;++i)
        {
            int temp = sum[i-1]+nums[i];
            sum.push_back(temp);
        }
    }

    int sumRange(int i, int j) {
        if(i==0)
            return sum[j];
        else
            return sum[j]-sum[i-1];
    }
private:
    vector<int> sum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */