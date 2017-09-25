class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1 = 1001, min2 = 1001;
        int max1 = -1001, max2 = -1001, max3 = -1001;
        for(auto ele: nums)
        {
            if(ele > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = ele;
            }else if(ele > max2)
            {
                max3 = max2;
                max2 = ele;
            }else if(ele > max3)
            {
                max3 = ele;
            }
            
            if(ele < min1)
            {
                min2 = min1;
                min1 = ele;
            }else if(ele < min2)
            {
                min2 = ele;
            }
        }
        return max(max1 * max2 * max3, max1 * min2 * min1);
    }
};