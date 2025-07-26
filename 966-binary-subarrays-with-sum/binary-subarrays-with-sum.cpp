class Solution {
public:

    int am(vector<int>&nums , int goal)
    {
         int l=0,r=0,ans=0,count=0;

        int n=nums.size();

        if(goal<0)
            return 0; 

        for(r=0;r<nums.size();r++){
            count+=nums[r];

            while(count>goal){
                count-=nums[l];
                l++;
            }
            ans+=(r-l+1);
        }    
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {

          return am(nums,goal)-am(nums,goal-1);
    }
};