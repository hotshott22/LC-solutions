class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();

        int ans=0;

        int count=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='('){
                count++;
                ans=max(count,ans);
            }
            else if(s[i]==')')
            {
                count--;
                ans=max(count,ans);
            }
            else
                continue;

        }
        return ans;
    }
};