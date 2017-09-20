class Solution {
public:
    vector<int> constructRectangle(int area) {
        int mid = sqrt(area);
        for(; mid < area; ++mid)
        {
            if(area%mid==0)
                break;
        }
        vector<int> result{mid, area/mid};
        sort(result.begin(), result.end(), greater<int>());
        return result;
    }
};