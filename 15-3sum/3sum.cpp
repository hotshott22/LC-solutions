class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        sort(v.begin(),v.end());
        vector<vector<int>>ans;

        for(int i=0;i<v.size();i++)
        {
            int target=-v[i];
            int f=i+1;
            int b=v.size()-1;

            while(f<b)
            {
                int sum=v[f]+v[b];

                if(sum<target)  f++;
                else if(sum>target) b--;
                else{
                    vector<int> trip = {v[i],v[f],v[b]};
                    ans.push_back(trip);

                    while(f<b && v[f]==trip[1])f++;
                    while(f<b && v[b]==trip[2])b--;
                }

            }
            while(i+1<v.size() && v[i+1]==v[i])i++;
        }

        return ans;


    }
};