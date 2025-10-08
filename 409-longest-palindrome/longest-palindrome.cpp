class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;
        int cnt=0,one=0;
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;    
        }
        for(auto i:m)
        {
            if(i.second>1)
            cnt+=i.second/2*(2);  

            if(i.second%2)  
            one=1;
        }
        return cnt+one;
    }
};