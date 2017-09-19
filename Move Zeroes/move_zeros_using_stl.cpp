class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator end = nums.end();
        vector<int>::iterator new_end = remove_if(nums.begin(), nums.end(), [](int i){return i==0;});
        for(;new_end!=end;++new_end)
        {
            *new_end = 0;
        }
    }
};