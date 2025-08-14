class Solution {
public:

    void dfs(int node, vector<int> adjl[],vector<int>& V)
    {
        V[node]=1;
        for(auto it:adjl[node]){
            if(!V[it]){
                dfs(it,adjl,V);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();

        vector<int>adjl[n];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                    {
                        adjl[i].push_back(j);
                        adjl[j].push_back(i);
                    }
            }
        }

        vector<int> V(n,0);

        int cnt=0;

        for(int i=0;i<n;i++)
        {
            if(!V[i])
            {
                cnt++;
                dfs(i,adjl,V);
            }
        }
        return cnt;
    }
};