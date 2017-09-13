class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>::iterator it = words.begin();
        vector<string> result;
        for(;it!=words.end();++it)
        {
            if(helper(*it))
                result.push_back(*it);
        }
        return result;
    }
private:
    int alpha_table[26] = {1,2,2,1,0,1,1,1,0,1,1,1,2,2,0,0,0,0,1,0,0,2,0,2,0,2};
    bool helper(string str)
    {
        int len = str.length();
        if(len<2)
            return true;
        int prev = str[0]>'Z'?static_cast<int>(str[0]-'a'):static_cast<int>(str[0]-'A');
        for(int i=1;i<len;++i)
        {
            int cur = str[i]>'Z'?static_cast<int>(str[i]-'a'):static_cast<int>(str[i]-'A');
            if(alpha_table[prev]!=alpha_table[cur])
                return false;
        }
        return true;
    }
};