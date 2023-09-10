class Solution
{
    public:
        int climbStairs(int s)
        {
            int dp[s + 1];
            dp[0] = 1;
            dp[1] = 1;
            for (int i = 2; i <= s; i++)
            {
                dp[i] = dp[i - 1] + dp[i - 2];
            }
            return dp[s];
        }
};