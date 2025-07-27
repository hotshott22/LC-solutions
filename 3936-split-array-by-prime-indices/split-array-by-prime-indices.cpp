class Solution {
public:
    bool isPrime(int x){
        int cnt=0;
        if(x<=1) return 0;
        for(int i=2;i<=sqrt(x);++i){
            if(x%i==0)
                return false;
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {

        long long sp=0;
        long long snp=0;

        for(int i=0;i<nums.size();i++)
        {
            if(isPrime(i)){
                sp+=nums[i];
            }   
            else{
                snp+=nums[i];
            } 
        }

        long long ans = abs(sp-snp);

        return ans;
        
    }
};