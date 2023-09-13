class Solution
{
    public:
        int candy(vector<int> &ratings)
        {
            int n = ratings.size();
            vector<int> candies(n, 1);	// Initialize all children with 1 candy

           	// First pass: Give candies to right neighbors if ratings are higher
            for (int i = 1; i < n; i++)
            {
                if (ratings[i] > ratings[i - 1])
                    candies[i] = candies[i - 1] + 1;
            }

           	// Second pass: Give candies to left neighbors if ratings are higher
            for (int i = n - 2; i >= 0; i--)
            {
                if (ratings[i] > ratings[i + 1])
                    candies[i] = max(candies[i], candies[i + 1] + 1);
            }

           	// Calculate total candies
            int totalCandies = accumulate(candies.begin(), candies.end(), 0);

            return totalCandies;
        }
};