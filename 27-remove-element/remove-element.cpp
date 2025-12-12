class Solution {
public:
    int removeElement(vector<int>& v, int val) {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==val){
                v.erase(v.begin() + i);
                i--;
            }   
        }

        return v.size();
    }
};