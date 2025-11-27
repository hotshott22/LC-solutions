class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>dup;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ioe = abs(nums[i])-1;

            nums[ioe]=-nums[ioe];

            if(nums[ioe]>0) dup.push_back(ioe+1);
        }

        return dup;
    }
};