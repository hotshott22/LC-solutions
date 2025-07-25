class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l=0,r=0;

        int n=s.length();
        int maxlen=0;

        unordered_set<char>cs;

        for(r=0;r<n;r++){
            while(cs.find(s[r])!=cs.end())
            {
                cs.erase(s[l]);
                l++;
            }
            cs.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
        }

        return maxlen;
    }
};