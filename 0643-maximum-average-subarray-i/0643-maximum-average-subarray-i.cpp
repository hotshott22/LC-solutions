class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double cs=0,ms=0;

        for(int i=0;i<k;i++)
        {
            cs+=nums[i];
        }
        ms=cs;

        for(int i=k;i<nums.size();i++)
        {
            cs+=nums[i]-nums[i-k];
            ms=max(ms,cs);
        }

        return ms/k;
    }
};