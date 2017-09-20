class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end(), less<int>());
        sort(nums2.begin(), nums2.end(), less<int>());
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int> result;
        for(int i=0, j=0; i<len1&&j<len2;)
        {
            if(nums1[i]==nums2[j])
            {
                result.push_back(nums1[i]);
                ++i;
                ++j;
            }
            else if(nums1[i]<nums2[j])
            {
                ++i;
            }
            else
            {
                ++j;
            }
        }
        result.erase(unique(result.begin(), result.end(), [](int i, int j){return i==j;}), result.end());
        return result;            
    }
};