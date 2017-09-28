class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
            return false;
        return static_cast<int>(log10(n)/log10(2)) - (log10(n)/log10(2))==0;
    }
};