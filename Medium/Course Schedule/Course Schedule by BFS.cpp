class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<unordered_set<int>> graph = makeGraph(numCourses, prerequisites);
        vector<int> in_degree = computeInDegree(numCourses, graph);
        for(int i=0;i<numCourses;++i)
        {
            int j;
            for(j=0;j<numCourses;++j)
            {
                if(!in_degree[j]) // find node which indegree equals 0
                    break;
            }
            if(j==numCourses)  //if all indegree not equals 0
                return false;
            in_degree[j] = -1;// means we have visited
            for(int node : graph[j])
            {
                --in_degree[node];
            }
        }
        return true;
    }
private:
    vector<unordered_set<int>> makeGraph(int numCourses, vector<pair<int, int>>& prerequisites)
    {
        vector<unordered_set<int>>  graph(numCourses);
        for(auto node : prerequisites)
        {
            graph[node.second].insert(node.first);//means node.second is node.first's precursor
        }
        return graph;
    }
    
    vector<int> computeInDegree(int numCourses, vector<unordered_set<int>> & graph)
    {
        vector<int> in_degree(numCourses, 0);
        for(auto neighbors: graph)
        {
            for(int neighbor : neighbors)
                ++in_degree[neighbor];
        }
        return in_degree;
    }
};