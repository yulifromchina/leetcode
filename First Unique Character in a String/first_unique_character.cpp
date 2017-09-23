class Solution {
public:
    int firstUniqChar(string s) {
        
        int len = s.length();
        if(len==0)
            return -1;
        if(len==1)
            return 0;
        unordered_map<char, int> umap;
        umap[s[0]]=1;
        for(int i=1;i<len;++i)
        {
            auto it = umap.find(s[i]);
            if(it==umap.end())
                umap[s[i]] = 1;
            else
                it->second = umap[s[i]]+1;
        }
        for(int i=0;i<len;++i)
        {
            if(umap[s[i]]==1)
                return i;
        }
        return -1;
    }
};