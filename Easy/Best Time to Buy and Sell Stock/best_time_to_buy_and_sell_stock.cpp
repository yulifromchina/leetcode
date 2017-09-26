class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int valley = INT_MAX, max_profit = 0;
        for(auto ele: prices)
        {
            if(ele < valley)
                valley = ele;
            if(ele - valley > max_profit)
                max_profit = ele - valley;
        }
        return max_profit;
    }
};