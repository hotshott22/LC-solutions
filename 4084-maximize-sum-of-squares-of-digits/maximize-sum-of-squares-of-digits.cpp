class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num)   return "";

        int sumc=sum;

        string ans="";

        for(int i=0;i<num;i++)
        {
            int val= min(9,sumc);
            ans+=char('0'+ val);
            sumc-=val;
        }
        return ans;
    }
};