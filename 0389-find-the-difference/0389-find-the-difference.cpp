class Solution {
public:
    char findTheDifference(string s, string t) {
        int ns=s.size();
        int nt=t.size();
        unordered_map<char,int>mp;

        for(int i=0;i<nt;i++)
        {
            mp[t[i]]++;
        }

        for(int i=0;i<ns;i++)
        {
            mp[s[i]]--;
        }

        for(auto i:mp)
        {
            if(i.second == 1)   return i.first;
        }

        return 'a';
    }
};