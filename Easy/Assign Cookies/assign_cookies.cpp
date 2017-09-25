class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int len_g = g.size(), len_s = s.size();
        if(len_g==0||len_s==0)
            return 0;
        sort(g.begin(), g.end(), less<int>());
        //cout<<"g:";
        //for_each(g.begin(), g.end(), [](int i){cout<<i<<" ";});
        sort(s.begin(), s.end(), less<int>());
        //cout<<"s:";
        //for_each(s.begin(), s.end(), [](int i){cout<<i<<" ";});
        int count = 0;
        for(int i=0 ,j=0; i<len_g && j<len_s;)
        {
            //cout<<"compare:";
            //cout<<"g["<<i<<"]="<<g[i]<<endl;
            //cout<<"s["<<j<<"]="<<s[j]<<endl;
            if(g[i]>s[j])
            {
                ++j;
            }else 
            {
                ++count;
                ++i;++j;
            }
        }
        return count;
    }
};