class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int wi=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[wi]=nums[i];
                wi++;
            }
        }

        while(wi<nums.size()){
            nums[wi]=0;
            wi++;
        }
    }
};