class Solution {
public:
    char findTheDifference(string s, string t) {
        int hash_table[26]={0};
        for(char c: s)
            hash_table[c-'a']++;
        for(char c:t)
            if(hash_table[c-'a']>0)
                hash_table[c-'a']--;
            else
                return c;
    }
};