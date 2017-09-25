class Solution {
public:
    bool detectCapitalUse(string word) {
       int len = word.length();
        if(len<=1) return true;
        if(islower(word[0]))
        {
            for(int i=1; i<len;++i)
                if(isupper(word[i]))
                    return false;
        }else
        {
            if(isupper(word[1]))
            {
                for(int i=2;i<len;++i)
                    if(islower(word[i]))
                        return false;
            }else
            {
                for(int i=2;i<len;++i)
                    if(isupper(word[i]))
                        return false;
            }
        }
        return true;
    }
};