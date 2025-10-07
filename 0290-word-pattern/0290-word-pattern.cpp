class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string>v;

        stringstream ss(s);
        string word;
        while(ss>>word) v.push_back(word);

        if(v.size()!=p.size())  return false;

        unordered_map<char,string>m;
        set<string>st;

        for(int i=0;i<p.size();i++)
        {
            if(m.find(p[i])!=m.end())
            {
                if(m[p[i]]!=v[i])   return false;
            }
            else
            {
                if(st.count(v[i])>0)    return false;
                m[p[i]]=v[i];
                st.insert(v[i]);
            }
        }
        return true;
    }
};