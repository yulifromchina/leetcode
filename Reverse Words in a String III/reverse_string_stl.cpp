class Solution {
public:
	string reverseWords(string s) {
		istringstream str(s);
		string result, temp;
		while (str >> temp)
		{
			copy(temp.rbegin(), temp.rend(), back_inserter(result));
			result += " ";
		}
        result.erase(result.end()-1,result.end());
		return result;
	}
};