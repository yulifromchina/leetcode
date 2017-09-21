class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int len_m = magazine.length();
        int len_r = ransomNote.length();
        int hash_table[26] = {0};
        for(int i=0; i<len_m;++i)
        {
            hash_table[magazine[i]-'a']++;
        }
        for(int i=0;i<len_r;++i)
        {
            if(hash_table[ransomNote[i]-'a']==0)
                return false;
            else
                hash_table[ransomNote[i]-'a']--;
        }
        return true;
    }
};