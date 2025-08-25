class Solution {
public:
        string shortestCommonSupersequence(string x, string y) {
     string ans="";
    int m = x.size();//length of first string 
    int n = y.size();//length of second string
    vector <vector <int> > t(m+1, vector<int> (n+1,0));

    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            //code of choice diagram 
            if(x[i-1]==y[j-1])
                t[i][j] = 1+t[i-1][j-1];
            else
                t[i][j] = max(t[i][j-1],t[i-1][j]);
        }
    }
    int i=m,j=n;
    while(i>0 && j>0){
        if(x[i-1] == y[j-1]){
            ans.push_back(x[i-1]);
            i--;
            j--;
        }
        else{
            if(t[i-1][j]>t[i][j-1]){
                ans.push_back(x[i-1]);
                i--; 
            }else{
                ans.push_back(y[j-1]);
                j--;
            }
        }
    }
    while (i>0)
    {
        ans.push_back(x[i-1]);
        i--;
    }
    while (j>0)
    {
        ans.push_back(y[j-1]);
        j--;
    }
   reverse(ans.begin(),ans.end());
        return ans;
    }

};