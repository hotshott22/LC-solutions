class Solution {
public:
    bool isAnagram(string s, string t) {

        int ns=s.length();
        int nt=t.length();

        if(nt!=ns) return false;

        int c[26];
        memset(c,0,sizeof(c));

        for(int i=0;i<ns;i++)
        {
            c[s[i]-'a']++;
            c[t[i]-'a']--;
        }

        for(int i=0;i<26;i++)
        {
            if(c[i]) return false;
        }
        return true;



        
    }
};