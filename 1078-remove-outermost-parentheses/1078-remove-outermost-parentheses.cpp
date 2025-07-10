class Solution {
public:
    string removeOuterParentheses(string s) {

        string res;
        int bal=0;

        for(char c:s){
            if(c=='(' && bal++>0) res+=c;
            if(c==')' && bal-->1) res+=c;
        }
        return res;
        
    }
};