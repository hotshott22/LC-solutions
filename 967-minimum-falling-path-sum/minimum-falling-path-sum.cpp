// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {

//         int n=matrix.size();
//         int m=matrix[0].size();

//         int arr[n][n];

//         for(int i=0;i<n;i++)
//         {
//             arr[0][i]=matrix[0][i];
//         }

//         for(int i=1;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(j==0)
//                 {
//                     arr[i][j]=matrix[i][j]+min(matrix[i-1][j],matrix[i-1][j+1]);
//                 }
//                 else if(j==m-1)
//                 {
//                     arr[i][j]=matrix[i][j]+min(matrix[i-1][j],matrix[i-1][j-1]);
//                 }
//                 else
//                 arr[i][j]=matrix[i][j]+min(min(matrix[i-1][j],matrix[i-1][j-1]),matrix[i-1][j+1]);
//             }
//         }
//         int ans = INT_MAX;

//         for(int j=0;j<m;j++)
//         {
//             ans=min(ans,arr[n-1][j]);
//         }

//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }

//         return ans;
//     }
// };

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int row=A.size();
        int column=A[0].size();
        for(int i=1;i<row;i++){
            for(int j=0;j<column;j++){
                if(j==0)                                                    //Leftmost or first column
                A[i][j]+=min(A[i-1][j],A[i-1][j+1]);
                else if(j==column-1)A[i][j]+=min(A[i-1][j],A[i-1][j-1]);     //Rightmost or last column
                else A[i][j]+=std::min({A[i-1][j],A[i-1][j+1],A[i-1][j-1]}); //Remaining cases
            }
        }
        int sum=INT_MAX;
        for(int i=0;i<column;i++){
            sum=min(sum,A[row-1][i]);                                      //Last row scan
        }
        return sum;
    }
};

