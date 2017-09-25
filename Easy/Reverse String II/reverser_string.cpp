class Solution {
public:
    string reverseStr(string s, int k) {
        int len = s.length();
        for(int i=0; i<len;i+=2*k)
            reverse(s.begin()+i, min(s.begin()+i+k, s.end()));
        return s;
    }
};