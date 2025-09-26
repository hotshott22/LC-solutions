class Solution {
public:
    bool possible(vector<int>& bloomDay,int m, int k ,int d)
    {   
        int n=bloomDay.size();
        int count=0;
        int nd=0;
        for(int i=0;i<n;i++)
        {
            if(bloomDay[i]<=d)  count++;
            else if(bloomDay[i]>d)
            {
                nd=nd+count/k;
                count=0;
            }
        }
        nd=nd+count/k;
        if(nd>=m)    return true;
        else    return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();

        long long val = m * 1LL * k * 1LL; 

        if(val>n)   return -1;

        int low= *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans=high;

        while(low<=high)
        {
            int mid=(low+high)/2;

            if(possible(bloomDay,m,k,mid)==true){
                ans=mid;
                high=mid-1;
            }
            else    low=mid+1;
        }
        return ans;
    }
};