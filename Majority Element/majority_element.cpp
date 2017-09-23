class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int len = nums.size();
        if(len==1)
            return nums[0];
        
        unordered_map<int, int> umap;
		umap[nums[0]] = 1;
		unordered_map<int, int>::iterator it;
		int i = 1;
		for (; i<len; ++i)
		{
			it = umap.find(nums[i]);
			if (it == umap.end())
				umap[nums[i]] = 1;
			else
			{
				int temp = umap[nums[i]];
				it->second = temp + 1;
				if (it->second > (len / 2))
					break;
			}		
		}
		return nums[i];
	}
};