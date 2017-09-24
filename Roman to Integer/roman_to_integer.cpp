class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        if(len==0)
            return 0;
        unordered_map<char, int>table = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}}; 
        int sum = table[s[len-1]];
        for(int i=len-2; i>=0;--i)
        {
         if(table[s[i]]<table[s[i+1]])
             sum -= table[s[i]];
         else
            sum+= table[s[i]];
        }
        return sum;
    }
};