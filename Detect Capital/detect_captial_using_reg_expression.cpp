class Solution {
public:
    bool detectCapitalUse(string word) {
        regex e1("^[A-Z]*$");
        regex e2("^[a-z]*$");
        regex e3("^[A-Z][a-z]*$");
        if(regex_match(word, e1) || regex_match(word, e2) || regex_match(word, e3))
            return true;
        return false;
    }
};