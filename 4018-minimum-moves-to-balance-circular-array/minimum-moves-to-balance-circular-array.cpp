class Solution {
public:
    long long minMoves(vector<int>& bal) {
        long long sum=0;
        int ni=-1;
        int n=bal.size();

        for(int i=0;i<n;i++)
        {
            sum+=bal[i];
            if(bal[i]<0)ni=i;
        }

        if(sum<0)   return -1;
        if(ni==-1)  return 0;

        long long need= - bal[ni];

        vector<pair<int,long long>>sources;

        for(int i=0;i<n;i++){
            if(bal[i]>0){
                int d=abs(i-ni);
                d=min(d,n-d);
                sources.push_back({d,bal[i]});
            }
        }

        sort(sources.begin(),sources.end());

        long long moves=0;

        for(auto& src:sources){
            if(need<=0) break;

            long long take = min(need,src.second);
            moves+=take*src.first;
            need-=take;
        }

        if(need>0)  return -1;

        return moves;
    }
};