class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int len_1 = nums1.size();
        int len_2 = nums2.size();
        if(len_1 ==0|| len_2==0)
            return {};
        sort(nums1.begin(), nums1.end(), less<int>());
        sort(nums2.begin(), nums2.end(), less<int>());
        vector<int> result;
        for(int i=0, j=0; i<len_1 && j<len_2;)
        {
            if(nums1[i]==nums2[j])
            {
                result.push_back(nums1[i]);
                ++i;
                ++j;
            }else if(nums1[i]<nums2[j])
                ++i;
            else
                ++j;
        }
        return result;
    }
};