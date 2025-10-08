class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>s;
        
        int n=candyType.size();
        for(int i=0;i<n;i++)
        {
            s.insert(candyType[i]);
        }
        n/=2;
        if(s.size()<n)
        {
            return s.size();
        }
        return  n;
    }
};