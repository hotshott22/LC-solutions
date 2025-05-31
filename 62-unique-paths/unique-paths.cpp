class Solution {
public:
    int uniquePaths(int m, int n) {

        // vector<int> row(m, 0);

        // vector<vector<int>> v (n,row);

        // for (int i = 0; i < v.size(); i++) {
        // for (int j = 0; j < v[i].size(); j++) {
        //      v[i][j] = 0;
        // }
        // }
        if(m==1 || n==1)
            return 1;

        int arr[m][n];
        memset(arr, 0, sizeof arr); 
        for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j]=0;
            if(i==0) arr[i][j]=1;
            if(j==0) arr[i][j]=1;    
        }
        }

        arr[m-1][n-1]=0;

        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }

        cout<<arr[m-1][n-1];

    return arr[m-1][n-1];
        
    }
};