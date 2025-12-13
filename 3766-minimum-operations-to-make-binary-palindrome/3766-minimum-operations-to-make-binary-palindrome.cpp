class Solution {
public:
    bool isBinaryPalindrome(int x) {
        string b = "";
        while (x > 0) {
            b += (x & 1) + '0';
            x >>= 1;
        }
        string rev = b;
        reverse(rev.begin(), rev.end());
        return b == rev;
    }

    vector<int> minOperations(vector<int>& nums) {
        const int MAXN = 10000;
        vector<int> palindromes;

        // Precompute all binary palindromes
        for (int i = 1; i <= MAXN; i++) {
            if (isBinaryPalindrome(i)) {
                palindromes.push_back(i);
            }
        }

        vector<int> ans;

        // For each number, find closest palindrome
        for (int x : nums) {
            int idx = lower_bound(palindromes.begin(), palindromes.end(), x) - palindromes.begin();
            int best = INT_MAX;

            if (idx < palindromes.size())
                best = abs(palindromes[idx] - x);
            if (idx > 0)
                best = min(best, abs(palindromes[idx - 1] - x));

            ans.push_back(best);
        }

        return ans;
    }

};