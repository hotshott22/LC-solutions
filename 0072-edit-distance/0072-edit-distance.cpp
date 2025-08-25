class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        
        // Create a dp array of size (n+1) x (m+1)
        vector<vector<int>> dp(n+1, vector<int>(m+1));
        
        // Initialize base cases
        for (int i = 0; i <= n; ++i) {
            dp[i][0] = i; // Deleting all characters from word1
        }
        for (int j = 0; j <= m; ++j) {
            dp[0][j] = j; // Inserting all characters of word2 into an empty word1
        }
        
        // Fill the dp table
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (word1[i-1] == word2[j-1]) {
                    dp[i][j] = dp[i-1][j-1]; // Characters match, no operation needed
                } else {
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}); // Minimum of insert, delete, replace
                }
            }
        }
        
        return dp[n][m]; // The answer is in dp[n][m]
    }
};