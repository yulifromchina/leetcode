/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if(node==NULL)
            return node;
        
        if(!hash.count(node))
        {
            UndirectedGraphNode * new_node = new UndirectedGraphNode(node->label);
            hash[node] = new_node;
            
            for(auto neighbor : node->neighbors)
            {
                new_node->neighbors.push_back(cloneGraph(neighbor));
            }
        }
        
        return hash[node];
    }
    
private:
    unordered_map<UndirectedGraphNode *, UndirectedGraphNode *> hash;//avoid copy cycle
};