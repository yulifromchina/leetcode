class Solution {
public:
    string reverseString(string s) {
        string result;
        copy(s.rbegin(), s.rend(), back_inserter(result));
        return result;
    }
};