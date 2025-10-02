class Solution {
public:

    int calculate(const vector<int> &mp)
    {
        int mf=INT_MIN;
        int lf=INT_MAX;

        for(int i=0;i<26;i++)
        {
            if(mp[i]>0){
                if(mp[i]>mf)    mf=mp[i];
                if(mp[i]<lf)    lf=mp[i];
            }
        }
        return (mf-lf);
    }
    int beautySum(string s) {
        int ans=0;

        

        for(int i=0;i<s.size();i++)
        {
            vector<int>mp(26,0);
            for(int j=i;j<s.size();j++)
            {
                
                mp[s[j]-'a']++;
                ans+=calculate(mp);
            }
        }

        return ans;
    }
};