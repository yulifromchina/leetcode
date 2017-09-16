class Solution {
public:
	int singleNumber(vector<int>& nums) {		
		if (nums.size() == 1)
			return nums[0];
		int sum = 0;
		for (int i : nums)
			sum += i;
        sort(nums.begin(), nums.end());
		nums.erase(unique(nums.begin(), nums.end(), [](int i, int j) {return i == j; }), nums.end());
		int sum_unique = 0;
		for (int i : nums)
			sum_unique += i;
		return sum_unique * 2 - sum;
	}
};