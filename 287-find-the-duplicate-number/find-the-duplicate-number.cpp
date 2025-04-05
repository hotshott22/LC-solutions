class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;

        

        while(l<r){
            int mid=l+(r-l)/2;
            int c=0;

            for(int i:nums){
                if(i<=mid){
                    c++;
                }
            }
            if(c>mid){
                r=mid;
            }
            else
                l=mid+1;

        }
        return l;
    }
};