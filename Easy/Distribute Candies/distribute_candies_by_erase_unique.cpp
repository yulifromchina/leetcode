class Solution {
public:
	int distributeCandies(vector<int>& candies) {
		int half = candies.size() / 2;
		sort(candies.begin(), candies.end());
		candies.erase(unique(candies.begin(), candies.end(), equal_to<int>()), candies.end());
		int new_size = candies.size();
		return (half < new_size ? half : new_size);
	}
};