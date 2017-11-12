class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        int a, b, c, d, len = s.length();
        for(a=1;a<=3;++a)
            for(b=1;b<=3;++b)
                for(c=1;c<=3;++c)
                    for(d=1;d<=3;++d)
                    {
                        if(a+b+c+d==len)
                        {
                            int A = stoi(s.substr(0,a));
                            int B = stoi(s.substr(a,b));
                            int C = stoi(s.substr(a+b,c));
                            int D = stoi(s.substr(a+b+c,d));
                            if(A<=255 && B<=255 && C<=255 && D<=255)
                            {
                                string ans = to_string(A)+"."+to_string(B)+"."+to_string(C)+"."+to_string(D);
                                if(ans.length()==s.length()+3)
                                    result.push_back(ans);
                            }
                                
                        }
                    }
        return result;
    }
};