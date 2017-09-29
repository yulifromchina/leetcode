class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0, i=32;
        while(i)
        {
            count+=(n&0x1);
            n>>=1;
            --i;
        }
        return count;
    }
};