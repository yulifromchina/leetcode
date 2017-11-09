class Solution {
public:
    vector<double> calcEquation(vector<pair<string, string>> equations, vector<double>& values, vector<pair<string, string>> queries) {
        
        unordered_map<string, unordered_map<string, double>> hash; //directed edge
        int size = values.size();
        for(int i=0;i<size;++i)
        {
            hash[equations[i].first][equations[i].second] = values[i];
            if(values[i]!=0)
                hash[equations[i].second][equations[i].first] = 1/values[i];
        }
        for(auto val: hash)
            hash[val.first][val.first]=1;
        
        //Floyd 
        for(auto center:hash)  //center node
            for(auto val1:hash)
                for(auto val2:hash)
                {
                    if(hash[val1.first].count(center.first) && hash[center.first].count(val2.first))
                        hash[val1.first][val2.first] = hash[val1.first][center.first]*hash[center.first][val2.first];
                }
        
        vector<double> res;
        for(auto val:queries)
        {
            if(hash[val.first].count(val.second))
                res.push_back(hash[val.first][val.second]);
            else
                res.push_back(-1.0);
        }
        return res;
    }
};