class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        
        string result;
        int temp = num>0?num:-num;
        while(temp)
        {
            result = to_string(temp%7)+result;
            temp/=7;
        }
        if(num<0)
            return "-"+result;
        return result;
    }
};