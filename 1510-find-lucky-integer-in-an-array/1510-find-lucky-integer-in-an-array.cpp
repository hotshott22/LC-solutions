class Solution {
public:
    int findLucky(vector<int>& arr) {

        int n=arr.size();
        unordered_map<int, int> freq;

        int v[501];
        
        for(int i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }

        int ans=-1;

        for(auto& [key,value]:freq)
        {
            if(key==value)
                ans=max(ans,key);
        }

        return ans;
    }
};