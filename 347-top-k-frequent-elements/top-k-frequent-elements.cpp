class Solution {
public:
static bool compare(pair<int,int>a, pair<int,int>b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(int i:nums) mp[i]++;

        vector<pair<int,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),compare);

        vector<int>ans;

        for(int i=0;i<k;i++)
            ans.push_back(v[i].first);


            return ans;
    }

};