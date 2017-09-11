class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		using umap = unordered_multimap<int, int>;
		umap mymap;
		mymap.insert(pair<int, int>(nums.at(0), 0));
		int i = 1, rest, size = nums.size();
		for (; i<size; i++)
		{
			rest = target - nums.at(i);
			auto result = mymap.find(rest);
			if (result != mymap.end())
			{
				vector<int> val = { result->second,i };
				return val;
			}
			mymap.insert(pair<int, int>(nums.at(i), i));
		}
	}
};