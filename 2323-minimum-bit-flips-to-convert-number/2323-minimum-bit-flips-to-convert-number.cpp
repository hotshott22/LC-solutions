class Solution {
public:
    int minBitFlips(int start, int goal) {

        int ans=start^goal;

        int ansu= __builtin_popcount(ans);

        return ansu;
        
    }
};