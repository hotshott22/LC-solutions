class Solution {
public:

    bool validcolor(vector<vector<int>>& graph, vector<int>&color,int node, int col)
    {
        if(color[node]!=0)  return(color[node]==col);

        color[node]=col;

        for(int i:graph[node])
        {
            if(!validcolor(graph,color,i,-col)) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();

        vector<int>color(n,0);

        for(int node=0;node<n;node++)
        {
            if(color[node]==0 && !validcolor(graph,color,node,1))
                return false;
        }

        return true;
    }
};