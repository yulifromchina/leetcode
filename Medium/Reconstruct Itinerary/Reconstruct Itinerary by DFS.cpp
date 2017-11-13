class Solution {
public:
    vector<string> findItinerary(vector<pair<string, string>> tickets) {
        for(auto tic: tickets)
        {
            fly_map[tic.first].insert(tic.second);
        }
        visit("JFK");
        return vector<string>(route.rbegin(), route.rend());
    }
private:
    unordered_map<string, multiset<string>> fly_map; //multiset using acsending order by default
    vector<string> route;//will be return aflter reverse 
    
    //DFS
    void visit(string airport)
    {
        while(!fly_map[airport].empty())
        {
            string next = *(fly_map[airport]).begin();
            fly_map[airport].erase(fly_map[airport].begin());
            visit(next);
        }
        route.push_back(airport);
    }
};