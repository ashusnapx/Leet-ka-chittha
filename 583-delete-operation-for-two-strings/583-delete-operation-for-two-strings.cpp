class Solution
{
    public:
        int minDistance(string word1, string word2)
        {
            int l1 = word1.size(), l2 = word2.size();
            int dp[l1 + 1][l2 + 1];
            memset(dp, 0, sizeof(dp));
            for (int i = 1; i <= l1; i++)
            {
                for (int j = 1; j <= l2; j++)
                {
                    if (word1[i - 1] == word2[j - 1])
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                    else
                    {
                        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                    }
                }
            }
            return l1 + l2 - (2 *dp[l1][l2]);
        }
};