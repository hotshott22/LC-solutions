class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();

        vector<int> r(n, 0);
        if (!k) return r;

        for (int i = 0; i < n; i++){
            int s = 0;
            if (k < 0){
                for (int j = i-1; j >= i+k; j--){
                    s += (code[(j + n)%n]);
                }
            }else if (k > 0){
                for (int j = i+1; j <= i+k; j++){
                    s += (code[(j + n)%n]);
                }
            }
            r[i] = s;
        }

        return r;
    }
};