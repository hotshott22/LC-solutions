class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;

        int n=s.length();

        int l=0;
        int ml=0;
        int j=0;

        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            l++;
            while(mp[s[i]]>1){
                mp[s[j++]]--;
                l--;
            }
            ml=max(ml,l);
        }

        return ml;

    }

};