class Solution {
public:
    int longestPalindrome(string s) {
        int table[128] = {0};
        int len = s.length();
        for(int i = 0; i<len;++i)
        {
            table[s[i]-0]++;
        }
        int odd = 0, even = 0;
        for(int i=0; i< 128;i++)
        {
            if(table[i]!=0)
            {
            if(table[i]%2==0)
                even+=table[i];
            else
            {
                if(table[i]>=3)
                {
                    even += table[i]-1;
                }
                odd++;
            }
            }
        }
        return min(1, odd)+even;
    }
};