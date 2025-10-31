class Solution {
public:
    int alternateDigitSum(int n) {

        int l= (to_string(n)).size();

        int flag;

        if(l%2==0)  flag=0;
        else    flag=1;

        int ans=0;

        while(n>0)
        {
            int x = n%10;
            if(flag==0){
                ans=ans-x;
                flag=1;
            }
            else if(flag==1){
                ans+=x;
                flag=0;
            }
            n=n/10;
        }

        return ans;
        
    }
};