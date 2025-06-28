class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size();

        int maxi=0;
        int c=0;
        if(arr[0]==1) c++; 

        if(n==1 && arr[0]==1) return 1;
        if(n==1 && arr[0]!=1) return 0;
        for(int i=1;i<n;i++){
            if(arr[i]==1 && arr[i-1]!=1)
                {
                    c=1;
                }

            if(arr[i]==1 && arr[i-1]==1){
                c++;
            }    
            maxi=max(maxi,c);   
        }        
        
        return maxi;
    }
};