class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();

        int l=0,r=n-1;
        int lm=0,rm=0;

        int ans=0;


        while(l<r){
            lm=max(lm,h[l]);
        rm=max(rm,h[r]);


        if(lm<rm)
        {
            ans+=lm-h[l];
            l++;
        }
        else{
            ans+=rm-h[r];
            r--;
        }
        }

        return ans;
        

    }

};