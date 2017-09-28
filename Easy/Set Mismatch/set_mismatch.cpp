class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto ele: nums)
        {
            auto it = umap.find(ele);
            if(it!=umap.end())
                it->second = 2;
            else
                umap[ele] = 1;
        }
        vector<int> result;
        int len = nums.size();
        for(int i=1; i<=len; ++i)
        {
            if(umap.find(i)==umap.end())
                result.insert(result.end(), i);
            else if(umap[i]==2)
                result.insert(result.begin(), i);
        }
        return result;
    }
};