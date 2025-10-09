class Solution {
public:
    int minimumRecolors(string b, int k) {
        int n=b.size();

        int i=0,j=0;

        int cw=0;


        while(j<k){
            if(b[j++]=='W')   cw++;

        }
        
        int ans=cw;

        while(j<n)
        {
            if(b[i++]=='W')
                {
                    cw--;
                    
                }
             if(b[j++]=='W')
                {
                    cw++;
                    
                }    
            ans=min(ans,cw);    
        }

        return ans;
    }
};