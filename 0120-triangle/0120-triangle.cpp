class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {

        int n=tri.size();

        cout<<"n="<<n<<endl;
        for(int i=n-2;i>=0;i--)
        {
            int m=tri[i].size();
            for(int j=m-1;j>=0;j--){
                tri[i][j]= tri[i][j] + min(tri[i+1][j],tri[i+1][j+1]);

                cout<<tri[i][j]<<endl;
            }
        }

        return tri[0][0];
        
    }
};