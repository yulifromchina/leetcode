class Solution {
public:
    string reverseWords(string s) {
        int len = s.length();
        if(len==0)
            return s;
        
        int i = 0;
        while(i<len)
        {
            if(!isspace(s[i]))
            {
                int k = i+1;
                while(k<len && !isspace(s[k]))
                {
                    ++k;
                }
                rev(s, i, k);
                i = k;
            }
            else
            {
                ++i;
            }
        }
        return s;
    }
private:
    void rev(string & s, int start, int end)
    {
        end = end - 1;
        if(start >= end)
            return;
        while(start<end)
        {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            
            ++start;
            --end;
        }
    }
};