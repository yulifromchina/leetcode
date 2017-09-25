class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> umap;
        for(int i: nums)
            umap[i] = 1;
        nums.clear();
        for(int i=1;i<=len;++i)
        {
            if(umap.count(i)==0)
                nums.push_back(i);
        }
        return nums;
    }
};