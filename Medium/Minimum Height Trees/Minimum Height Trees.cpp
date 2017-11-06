class Solution {
public:
    //store node
    struct Node
    {
        unordered_set<int> neighbors;  
        bool IsLeaf() const {return neighbors.size()==1;}
    };
    
    vector<int> findMinHeightTrees(int n, vector<pair<int, int>>& edges) {
        vector<int> buffer1;
        vector<int> buffer2;
        //in swap function, change pointer is better than vector
        vector<int> * pb1 = &buffer1;
        vector<int> * pb2 = &buffer2;
        
        if(n==1)
        {
            buffer1.push_back(0);
            return buffer1;
        }
        
        if(n==2)
        {
            buffer1.push_back(0);
            buffer1.push_back(1);
            return buffer1;
        }
        
        //build graph
        vector<Node> nodes(n);
        for(auto edge:edges)
        {
            nodes[edge.first].neighbors.insert(edge.second);
            nodes[edge.second].neighbors.insert(edge.first);
        }
        
        //find leaf node
        for(int i=0;i<n;++i)
        {
            if(nodes[i].IsLeaf())
                pb1->push_back(i);
        }
        
        //trip leaf layer by layer
        while(1)
        {
            for(auto i:*pb1)
            {
                for(auto x: nodes[i].neighbors)//although only one element in nodes[i].neighbors, we have to use this way to visit
                {
                    nodes[x].neighbors.erase(i);
                    if(nodes[x].IsLeaf())
                        pb2->push_back(x);
                }
                
            }
            if(pb2->empty())
                return *pb1;
            
            pb1->clear();
            swap(pb1, pb2);
        }
    }
};