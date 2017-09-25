class Solution {
public:
    bool checkRecord(string s) {
        if(s.length()==0)
            return true;
        int table[3]={0};
        for(auto ele:s)
        {
            switch (ele)
            {
                case 'P':
                    table[2]++;table[0]=0;break;
                case 'A':
                    table[1]++;table[0]=0;break;
                case 'L':
                    table[0]++;break;
            }
            if(table[0]>2 || table[1]>1)
                return false;
        }
        
        return true;
    }
};