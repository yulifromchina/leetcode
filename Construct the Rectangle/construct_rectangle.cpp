class Solution {
public:
    vector<int> constructRectangle(int area) {
        int factor1 = sqrt(area);
        int factor2 = factor1;
        int product = factor1 * factor2;
        while(product != area)
        {
            if(product < area)
                ++factor2;
            if(product > area)
                --factor1;
            product = factor1 * factor2;
        }
        vector<int> result{factor2, factor1};
        return result;
    }
};