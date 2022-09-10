class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
           	//size of vector
            int n = prices.size();

           	// see if size of price array is 1, then no profit no loss
            if (n == 1) return 0;

           	// if i buy and sell on the same day, my profit would be 0
            int profit = 0;

           	// lets suppose that the minimum cost is of prices[0]
            int mini = prices[0];

           	// traverse through each day and find three things
            /*
            1. cost to me
            2. profit to me
            3. minimum kitta hai
            */
            int cost;
            for (int i = 1; i < n; i++)
            {
                cost = prices[i] - mini;
                profit = max(profit, cost);
                mini = min(mini, prices[i]);
            }

            return profit;
        }
};