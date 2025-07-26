class Solution {
public:
    int characterReplacement(string s, int k) {

        int n=s.length();

        unordered_map<char,int>freq;

        int res=0,i=0,mf=0;

        for(int j=0;j<n;j++)
        {
            freq[s[j]]++;
            mf=max(mf,freq[s[j]]);

            while((j-i+1)-mf>k)
            {
                freq[s[i]]--;
                i++;
            }
            res=max(res,j-i+1);
        }
        
        return res;
    }
};