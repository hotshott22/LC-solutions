class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        const int INF = amount + 1;
        sort(coins.begin(),coins.end());
        vector<vector<int>> dp(coins.size(),vector<int>(amount + 1, INF));
        
        // Base case: 0 coing needed to make amount 0
        for(int i = 0; i < dp.size(); i++)
        {
            dp[i][0] = 0;
        }
        // Base case: using only coin[0]
        for(int j = 0; j < dp[0].size(); j++)
        {
            if(j % coins[0] == 0)
            {
                dp[0][j] = j / coins[0];
            }
        }

        // Fill the dp table
        for(int i = 1; i < coins.size(); i++) // i = coin index
        {
            for(int j = 1; j <= amount; j++) // j = current sum
            {
                if(coins[i] <= j)
                { 
                    dp[i][j] = min(dp[i-1][j], dp[i][j - coins[i]] + 1); 
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if(dp[coins.size()-1][amount] == INF)
            return -1;
        
        return dp[coins.size()-1][amount];



    }
};