class Solution
{
    public:
        int maxProfit(int k, vector<int> &prices)
        {
            vector<vector < int>> temp(2, vector<int> (k + 1, 0));
            vector<vector < int>> ans(2, vector<int> (k + 1, 0));

            for (int i = prices.size() - 1; i >= 0; i--)
            {
                for (int buy = 0; buy < 2; buy++)
                {
                    for (int cap = 1; cap < k + 1; cap++)
                    {
                        if (buy == 1)
                            ans[buy][cap] = max(temp[0][cap] - prices[i], temp[1][cap]);
                        else
                            ans[buy][cap] = max(temp[1][cap - 1] + prices[i], temp[0][cap]);
                    }
                }
                temp = ans;
            }

            return ans[1][k];
        }
};