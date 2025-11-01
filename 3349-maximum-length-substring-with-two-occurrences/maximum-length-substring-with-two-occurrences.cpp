class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();

        int ml=0;

        map<char,int>mp;
        int b=0,e=0;

        while(e<n)
        {
            mp[s[e]]++;
            while(mp[s[e]]==3)  mp[s[b++]]--;
            ml=max(ml,e-b+1);
            e++;
        }

        return ml;
    }
};