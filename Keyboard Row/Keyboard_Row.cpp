class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> row_1{'Q','q','W','w','E','e','R','r','T','t','Y','y','U','u','I','i','O','o','P','p'}; 
        set<char> row_2{'A','a','S','s','D','d','F','f','G','g','H','h','J','j','K','k','L','l'};
        set<char> row_3{'Z','z','X','x','C','c','V','v','B','b','N','n','M','m'};
        vector<string>::iterator it=words.begin();
        vector<string> result;
        for(;it!=words.end();++it)
        {   
            int len = (*it).length(), i;
            if(row_1.find((*it)[0])!=row_1.end())
            {
                for(i=1;i<len;++i)
                {
                    if(row_1.find((*it)[i])==row_1.end())
                        break;
                }
                if(i==len)
                    result.push_back(*it);
            }else if(row_2.find((*it)[0])!=row_2.end())
            {
                for(i=1;i<len;++i)
                {
                    if(row_2.find((*it)[i])==row_2.end())
                        break;
                }
                if(i==len)
                    result.push_back(*it);
            }else if(row_3.find((*it)[0])!=row_3.end())
            {
                for(i=1;i<len;++i)
                {
                    if(row_3.find((*it)[i])==row_3.end())
                        break;
                }
                if(i==len)
                    result.push_back(*it);
            }
        }
        return result;
    }
};