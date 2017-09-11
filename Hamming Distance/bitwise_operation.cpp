class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0, i = 32, val;
        while(i>0)
        {
            val = (x&0x1)^(y&0x1);
            count+=val;
            x>>=1;
            y>>=1;
            --i;
        }
        return count;
    }
};