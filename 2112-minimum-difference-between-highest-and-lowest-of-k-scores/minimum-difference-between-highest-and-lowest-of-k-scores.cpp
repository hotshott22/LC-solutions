class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        if(n==1)    return 0;

        int ans=INT_MAX;
        int j=k-1,i=0;
        while(j<n)
        {
            int diff=nums[j]-nums[i];
            ans=min(diff,ans);
            j++;i++;
        }
        return ans;
    }
};