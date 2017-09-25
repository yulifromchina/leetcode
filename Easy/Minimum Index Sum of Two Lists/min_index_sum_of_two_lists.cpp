class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> umap;
        int len_list1 = list1.size();
        for(int i=0; i<len_list1;++i)
        {
            umap[list1[i]] = i;
        }
        int len_list2 = list2.size();
        int sum = 2000;
        vector<string> result;
        for(int i=0; i<len_list2;++i)
        {
            if(umap.count(list2[i])==1)
            {
                int temp = i + umap[list2[i]];
                if(temp < sum)
                {
                    if(!result.empty())
                        result.clear();
                    result.push_back(list2[i]);
                    sum = temp;
                }
                else if(temp==sum)
                {
                    result.push_back(list2[i]);
                }
            }
        }
        return result;
    }
};