class Solution {
public:
    string reverseString(string s) {
        int i=0, j=s.length()-1;
        for(;i<j;++i,--j)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
        return s;
    }
};