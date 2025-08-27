class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        int minn = p[0];
        int maxx=0;

        if(p.size()==0)
            return 0;

        else
        {
            for(int i=1;i<p.size();i++)
            {
                maxx=max(maxx,p[i]- minn);
                minn = min(p[i],minn);
            }
            return maxx;
        }    
    }
};