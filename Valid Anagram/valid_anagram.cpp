class Solution {
public:
    bool isAnagram(string s, string t) {
        int len_s = s.length();
        int len_t = t.length();
        if(len_s==0 && len_t==0)
            return true;
        if(len_s==0 && len_t!=0)
            return false;
        int table[26]={0};
        for(int i=0;i<len_s;++i)
        {
            table[s[i]-'a']++;
        }
        for(int i=0;i<len_t;++i)
        {
            table[t[i]-'a']--;
        }
        for(int i=0; i< 26;++i)
        {
            if(table[i]!=0)
                return false;
        }
        return true;
    }
};