class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        
        //build graph
        unordered_map<int, multiset<int>> graph(numCourses);
        for(auto edge: prerequisites)
        {
            graph[edge.second].insert(edge.first);//edge.second is the prerequisite of edge.first
        }
        
        //compute in_degree
        vector<int> in_degree(numCourses, 0);
        for(auto node :graph)
            for(int i: node.second)
                ++in_degree[i];
        
        //topological sorting
        vector<int> route;
        route.reserve(numCourses);
        for(int i=0;i<numCourses;++i)
        {
            int j;
            for(j=0;j<numCourses;++j)
            {
                if(!in_degree[j])
                    break;
            }
            if(j==numCourses)
                return {};
            in_degree[j]=-1;
            route.push_back(j);
            for(auto node : graph[j])
            {
                --in_degree[node];
            }
        }
        
        return route;
    }
};