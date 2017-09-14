class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        string Fizz = "Fizz";
        string Buzz = "Buzz";
        for(int i = 1; i<= n; i++)
        {
            string s = to_string(i);
            if((i%15==0)&&(i>=15))
                result.push_back(Fizz+Buzz);
            else if((i%3==0)&&(i>=3))
                result.push_back(Fizz);
            else if((i%5==0)&&(i>=5))
                result.push_back(Buzz);
            else
                result.push_back(s);
        }
        return result;
    }
};