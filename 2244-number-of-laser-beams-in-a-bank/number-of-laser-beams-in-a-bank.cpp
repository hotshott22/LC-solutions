class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0,prev=0,c=0;

        for(string s:bank)
        {
            c=0;

            for(int i=0;i<s.size();i++)
                if(s[i]=='1')   c++;

            if(c)
            {
                ans+=prev*c;
                prev=c;
            }    
        }

        return ans;
    }
};