class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>cnt(n+1,0);
        cnt[0]=1;
        int t=0;

        int ans=0;

        for(int v: nums)
        {
            t+=v&1;
            if(t-k>=0)  ans+=cnt[t-k];
            cnt[t]++;
        }

        return ans;
    }
};