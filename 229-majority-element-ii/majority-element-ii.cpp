class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();

        int maj=n/3;

        unordered_map<int,int>map;

        vector<int>v;

        for(int i=0;i<n;i++)
        {
            map[nums[i]]++;
        }

        for(auto i:map)
        {
            if(i.second>maj)    v.push_back(i.first);
        }
        return v;
    }
};