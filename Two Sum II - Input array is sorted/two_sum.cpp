class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> umap;
        int len = numbers.size();
        vector<int> result;
        for(int i=0; i<len;++i)
        {
            int res = target - numbers[i];
            if(umap.count(res)!=0)
            {
                result.push_back(umap[res]+1);
                result.push_back(i+1);
            }
            umap[numbers[i]] = i;
        }
        return result;
    }
};