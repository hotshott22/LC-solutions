class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int res=0,o=0,z=0;

        for(int l=0,r=0;r<s.size();r++)
        {
            s[r]=='0'?z++:o++;

            while(o>k && z>k){
                s[l++]=='0'?z--:o--;
            }
            res+=(r-l+1);
        }

        return res;
    }
};