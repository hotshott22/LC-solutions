class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.length()!=goal.length())   return false;
        string con = goal+goal;

        return con.find(s)!=string::npos;
        
    }
};