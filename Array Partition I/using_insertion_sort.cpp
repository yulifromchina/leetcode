class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int i, j, len = nums.size();
        for(i=1;i<len;i++)
        {
            if(nums[i]<nums[i-1])
            {
                int temp = nums[i];
                for(j=i-1;j>=0&&(temp<nums[j]);j--)
                {
                    nums[j+1] = nums[j];
                }
                nums[j+1] = temp;
            }
        }
        //for_each(nums.begin(), nums.end(), [](int i){cout<<i<<" ";});
        int sum=0;
        for(i=0;i<len-1;i+=2)
        {
            sum+=nums[i];
            //cout<<"nums:"<<nums[i]<<endl;
        }
        return sum;
    }
};