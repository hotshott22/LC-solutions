class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n=strs.size();

        string ans="";

        sort(strs.begin(),strs.end());

        string f=strs[0],l=strs[n-1];

        for(int i=0;i<min(f.size(),l.size());i++)
        {
            if(f[i]!=l[i])
                return ans;
            ans+=f[i];    
        }
        return ans;

        
    }
};