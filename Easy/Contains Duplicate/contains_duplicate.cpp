class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len = nums.size();
        if(len<2)
            return false;
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end(), [](int i, int j){return i==j;}), nums.end());
        //for_each(nums.begin(), nums.end(), [](int i){cout<<i<<",";});
        if(nums.size()!=len)
            return true;
        return false;
    }
};