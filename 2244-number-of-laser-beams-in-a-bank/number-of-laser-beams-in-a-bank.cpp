class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;

        vector<int>lc;

        for(int i=0;i<bank.size();i++)
        {
            int c=0;
            string cs = bank[i];
            for(long j=0;j<cs.size();j++)
            {
                if(cs[j]=='1') c++;
            }
            if(c!=0)
                lc.push_back(c);
        }

        for(int i=1;i<lc.size();i++)
        {
            int x=lc[i]*lc[i-1];
            
            ans+=x;
        }

        return ans;

        
    }
};