class Solution {
public:
    int shipWithinDays(vector<int>& w, int d) {
        int n=w.size();

        int low=*max_element(w.begin(),w.end());

        int high=accumulate(w.begin(),w.end(),0);

        while(low<high)
        {
            int mid=(low+high)/2;
            int dn=1,cw=0;

            for(int wt:w)
            {
                if(cw+wt>mid){
                    dn++;
                    cw=0;
                }
                cw+=wt;
            }
            if(dn>d)  low=mid+1;
            else    high=mid;
        }
        return low;
    }
    
};