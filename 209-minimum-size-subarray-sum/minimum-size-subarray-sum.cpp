class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n=nums.size();

        int l=0,r=0,len=INT_MAX,sum=0;

        while(r<n)
        {
            sum+=nums[r++];

            while(sum>=s)
            {
                len=min(len,r-l);
                sum-=nums[l++];
            }
        }
        return len==INT_MAX?0:len;
    }
};