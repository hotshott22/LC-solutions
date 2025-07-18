class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> res;

        if(matrix.empty() || matrix[0].empty()) return res;

        int ro=matrix.size();
        int c=matrix[0].size();
        int l=0,r=c-1,t=0,b=ro-1;

        while(l<=r && t<=b)
        {
            for(int i=l;i<=r;i++)   res.push_back(matrix[t][i]);
            t++;

            for(int i=t;i<=b;i++) res.push_back(matrix[i][r]);
            r--;

            if(t<=b){
                for(int i=r;i>=l;i--) res.push_back(matrix[b][i]);
                b--;
            }
            if(l<=r){
                for(int i=b;i>=t;i--) res.push_back(matrix[i][l]);
                l++;
            }
        }
        return res;
        
    }
};