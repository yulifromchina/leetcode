class Solution {
public:
    int firstUniqChar(string s) {
        
        int table[26]={0};
        int len = s.length();
        for(int i=0; i<len;++i)
        {
            table[s[i]-'a']++;
        }
        for(int i=0; i<len;++i)
        {
            if(table[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};