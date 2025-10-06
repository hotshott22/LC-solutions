class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();

        if(m>n) return "";

        vector<int>hash(256,0);

        for(int i=0;i<m;i++)    hash[t[i]]++;

        int l=0,r=0,cnt=0,minl=1e9,sI=-1;

        while(r<n){
            if(hash[s[r]]>0)    cnt++;

            hash[s[r]]--;

            while(cnt==m){
                if(r-l+1 < minl){
                    minl=r-l+1;
                    sI=l;
                }

                hash[s[l]]++;
                if(hash[s[l]]>0)    cnt--;
                l++;

            }
            r++;
        }
        return sI ==-1? "": s.substr(sI,minl);
    }
};