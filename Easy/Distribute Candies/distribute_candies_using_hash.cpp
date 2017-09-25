class Solution {
public:
	int distributeCandies(vector<int>& candies) {
		bitset<200001> hash;
        int len = candies.size(), count=0;
        for(int i=0; i< len; i++)
        {
            int index = candies[i]+100000;
            if(!hash.test(index))
            {
                ++count;
                hash.set(index);
            } 
            if(count>=len/2)
                break;
            
        }
        return count;
    }
};
	