class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int f=0,a=0;

        for(int i=0;i<nums.size();i++){
            if(f==0) a=nums[i];

            if(a==nums[i])f++;

            else
                f--;
        }

        return a;

    }
};