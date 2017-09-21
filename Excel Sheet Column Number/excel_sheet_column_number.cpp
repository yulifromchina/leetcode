class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length();
        if(len == 0)
            return 0;
        int sum = s[0]-'A'+1;
        for(int i=1;i<len;++i)
        {
            sum *= 26;
            sum += s[i]-'A'+1;
        }
        return sum;
    }
};