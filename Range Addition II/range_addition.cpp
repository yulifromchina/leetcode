class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
       if(ops.size()==0)
           return m * n;
        int min_1 = ops[0][0];
        int min_2 = ops[0][1];
        for(auto it: ops)
        {
            if(it[0]<min_1)
                min_1 = it[0];
            if(it[1]<min_2)
                min_2 = it[1];
        }
        return min_1 * min_2;
    }
};