class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }

        vector<int>ans;

        for(auto i=1;i<=n;i++)
        {
            if(mp[i]==0) ans.push_back(i);
        }

        return ans;
    }
};