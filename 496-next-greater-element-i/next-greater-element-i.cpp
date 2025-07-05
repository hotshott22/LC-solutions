class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {


        stack <int> st;
        unordered_map<int, int> umap;
        vector<int> res(nums1.size(), -1); 


        for(int i=0;i<nums2.size();i++){
            int ele=nums2[i];
            while(!st.empty() && ele>st.top()){
                umap[st.top()] = ele;
                st.pop();
            }
            // if(st.empty()) arr[i]=-1;
            // else arr[i]=st.top();
            
            st.push(ele);
        }

        for(int i=0;i<nums1.size();i++)
        {
            int ele=nums1[i];

            if(umap.find(ele)!=umap.end())
            {
                int nge=umap[ele];
                res[i]=nge;
            }
        }
        return res;
    }
};