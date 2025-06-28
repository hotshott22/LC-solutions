class Solution {
public:
    int removeDuplicates(vector<int>& v) {

    v.erase(unique(v.begin(),v.end()),v.end());

        return v.size();
        
    }
};