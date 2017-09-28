class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        return static_cast<int>(log10(n)/log10(3)) - (log10(n)/log10(3))==0;
    }
};