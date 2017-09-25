class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(vector<int>::iterator it = nums.begin(); it!=nums.end()-1;it++)
        {
            for(vector<int>::iterator it2 = it+1;it2!=nums.end();it2++)
            {
                if(target==*it+*it2)
                {
                    vector<int> result = {it2-nums.begin(), it-nums.begin()};
                    return result;
                }
            }
        }
    }
};