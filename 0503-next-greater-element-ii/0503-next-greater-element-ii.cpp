class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        //     O(N2) ->TIME TLE
        // int n=nums.size();

        // vector<int>ans;

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;i<=i+n-1;j++)
        //     {
        //         int ind=j%n;
        //         if(nums[ind]>nums[i]){
        //             ans.push_back(nums[ind]);
        //             break;
        //         }
                    
        //     }
        // }
        // return ans;

        int n=nums.size();

        stack<int>st;
        vector<int>v(n,-1);

        for(int i=2*n-1;i>=0;i--)
        {
            while(!st.empty() && nums[i%n]>=st.top()) st.pop();

            if(!st.empty() && i<n) v[i]=st.top();

            st.push(nums[i%n]);
        }

        return v;


    }
};