class Solution {
public:
    int minBitFlips(int start, int goal) {

        int ans=start^goal;

        // int ansu= __builtin_popcount(ans);

        // return ansu;

        int c=0;
        while(ans){
            c+=ans&1;
            ans>>=1;
        }
        return c;
    }
};